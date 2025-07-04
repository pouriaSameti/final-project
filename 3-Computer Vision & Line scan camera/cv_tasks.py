import os
import cv2
import torch
import torchvision
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
            output_dir = "objects"

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
