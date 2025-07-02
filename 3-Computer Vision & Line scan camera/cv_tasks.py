import cv2
import torch
import torchvision
from ultralytics import YOLO


class ObjectDetection:
    @staticmethod
    def apply_yolo8n(frame):
        model = YOLO('object detection models/yolov8n-custom.pt')
        results = model(frame)
        annotated_frame = results[0].plot()

        return annotated_frame
