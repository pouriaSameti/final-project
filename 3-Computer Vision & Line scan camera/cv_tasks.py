import os
import cv2
import torch
import torch.nn as nn
import torchvision
from torchvision import transforms
import torch.nn.functional as F
from PIL import Image
from ultralytics import YOLO


class ObjectDetection:
    @staticmethod
    def apply_yolo8n(frame):
        model = YOLO('object detection models/yolov8n.pt')
        results = model(frame)
        annotated_frame = results[0].plot()

        return annotated_frame

    @staticmethod
    def apply_yolo8_costume(frame, counter: int, save_enable:bool):
        model = YOLO('object detection models/yolov8n-custom.pt')
        results = model(frame)[0]
        annotated_frame = results.plot()

        frame_count = counter
        if save_enable:
            output_dir = "Saved Objects"

            for i, box in enumerate(results.boxes):
                x1, y1, x2, y2 = map(int, box.xyxy[0])
                cls_id = int(box.cls[0])
                label = results.names[cls_id]

                cropped_obj = frame[y1:y2, x1:x2]

                filename = f"{label}_f{frame_count}_{i}.jpg"
                save_path = os.path.join(output_dir, filename)
                cv2.imwrite(save_path, cropped_obj)

            frame_count += 1

        return annotated_frame, frame_count


class AnomalyDetection:

    @staticmethod
    def apply_triplet_network(frame, anchor_tensor, embedding_network, detection_model, threshold=1):

        device = "cpu"

        transform = transforms.Compose([
            transforms.Resize((640, 640)),
            transforms.ToTensor(),
        ])

        with torch.no_grad():
            anchor_embedding = embedding_network(anchor_tensor)

        results = detection_model(frame)[0]
        annotated_frame = results.plot()

        for i, box in enumerate(results.boxes):
            x1, y1, x2, y2 = map(int, box.xyxy[0])
            cls_id = int(box.cls[0])
            label = results.names[cls_id]

            cropped = frame[y1:y2, x1:x2]
            if cropped.size == 0:
                continue
            cropped_pil = Image.fromarray(cv2.cvtColor(cropped, cv2.COLOR_BGR2RGB))
            obj_tensor = transform(cropped_pil).unsqueeze(0).to(device)

            with torch.no_grad():
                obj_embedding = embedding_network(obj_tensor)
                distance = F.pairwise_distance(anchor_embedding, obj_embedding).item()

            match_label = "Positive" if distance < threshold else "Negative"
            color = (0, 255, 0) if match_label == "Positive" else (0, 0, 255)

            cv2.rectangle(annotated_frame, (x1, y1), (x2, y2), color, 5)
            cv2.putText(annotated_frame,
                        f"{match_label} ({distance:.2f})",
                        (x1, y1 + 10),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.5,
                        color, 2)

        return annotated_frame


class EmbeddingNet(nn.Module):
    def __init__(self):
        super(EmbeddingNet, self).__init__()
        self.convnet = nn.Sequential(
            nn.Conv2d(3, 32, kernel_size=5, stride=1, padding=2),
            nn.ReLU(),
            nn.MaxPool2d(2),  # 320x320

            nn.Conv2d(32, 64, kernel_size=5, stride=1, padding=2),
            nn.ReLU(),
            nn.MaxPool2d(2),  # 160x160

            nn.Conv2d(64, 128, kernel_size=3, stride=1, padding=1),
            nn.ReLU(),
            nn.MaxPool2d(2),  # 80x80

            nn.Conv2d(128, 256, kernel_size=3, stride=1, padding=1),
            nn.ReLU(),
            nn.MaxPool2d(2),  # 40x40

            nn.Conv2d(256, 512, kernel_size=3, stride=1, padding=1),
            nn.ReLU(),
            nn.AdaptiveAvgPool2d((1, 1))
        )
        self.fc = nn.Linear(512, 128)

    def forward(self, x):
        x = self.convnet(x)
        x = x.view(x.size(0), -1)
        x = self.fc(x)  # batch_size, 128)
        return x