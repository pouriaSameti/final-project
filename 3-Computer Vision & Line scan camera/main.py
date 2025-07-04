import cv2
import numpy as np
import time
import torch
from torchvision import transforms
from ultralytics import YOLO
from PIL import Image
from onvif_manager import ONVIFCameraManager
from classic_segmentation import FrameSegmentation
from cv_tasks import ObjectDetection, AnomalyDetection, EmbeddingNet

# ONVIF Camera Connection Settings
HOST = '192.168.1.1'
PORT = 8899
USERNAME = 'admin'
PASSWORD = '@sdf1234'
WSDL_DIR = 'C:\\python-onvif-zeep\\wsdl'

# Line Scan Parameters
LINE_INDEX = 270
MAX_LINES = 540
SAMPLING_INTERVAL_SECONDS = 0.5  # one sample every 0.25 seconds (4 samples per second)
WINDOW_NAME = "Line Scan Simulation"
OBJECT_Counter = 0


if __name__ == '__main__':

    # Camera Initialization
    camera_manager = ONVIFCameraManager(HOST, PORT, USERNAME, PASSWORD, WSDL_DIR)
    camera_manager.connect()
    rtsp_url = camera_manager.get_rtsp_url()
    print("RTSP Stream URL:", rtsp_url)

    # Imports for Anomaly Detection
    transform = transforms.Compose([
        transforms.Resize((640, 640)),
        transforms.ToTensor(),
    ])
    anchor_img = Image.open("Train Triplet Network/triplet_data/anchor/main anchor.jpg").convert("RGB")
    anchor_tensor = transform(anchor_img).unsqueeze(0)

    embedding_net = EmbeddingNet()
    embedding_model_path = "Train Triplet Network/embedding_net.pth"
    device = 'cpu'
    embedding_net.load_state_dict(torch.load(embedding_model_path, map_location=device))
    embedding_net.to(device).eval()

    detection_model_path = "object detection models/yolov8n-custom.pt"
    yolo8n_costume = YOLO(detection_model_path)

    # Camera real-time image capturing
    cap = cv2.VideoCapture(rtsp_url)

    if cap.isOpened():
        print('Camera stream opened successfully.')
        cv2.namedWindow(WINDOW_NAME, cv2.WINDOW_NORMAL)
        cv2.resizeWindow(WINDOW_NAME, 960, 540)

        accumulated_image = None
        last_sample_time = time.time()

        while True:
            ret, frame = cap.read()
            if not ret:
                print("Lost connection to the stream.")
                break

            now = time.time()
            if now - last_sample_time >= SAMPLING_INTERVAL_SECONDS:
                last_sample_time = now

                gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                line = gray[LINE_INDEX:LINE_INDEX + 1, :]

                if accumulated_image is None:
                    accumulated_image = np.zeros((0, line.shape[1]), dtype=np.uint8)

                accumulated_image = np.vstack([accumulated_image, line])

                if accumulated_image.shape[0] > MAX_LINES:
                    accumulated_image = accumulated_image[1:, :]

                # show real-time image
                # rotated = cv2.rotate(accumulated_image, cv2.ROTATE_90_CLOCKWISE)
                # cv2.imshow(WINDOW_NAME, rotated)

                # Local Segmentation with Otsu
                # rotated = cv2.rotate(accumulated_image, cv2.ROTATE_90_CLOCKWISE)
                # segmented_image = FrameSegmentation.apply_local_segmentation(frame=rotated, segments=8)
                # cv2.imshow(WINDOW_NAME, segmented_image)

                # Segmentation with Region Growing
                # rotated = cv2.rotate(accumulated_image, cv2.ROTATE_90_CLOCKWISE)
                # segmented_mask = FrameSegmentation.apply_region_growing(rotated, threshold=128)
                # cv2.imshow(WINDOW_NAME, rotated)

                # Segmentation with HSV Space
                # img = cv2.cvtColor(accumulated_image, cv2.COLOR_GRAY2BGR)
                # rotated = cv2.rotate(img, cv2.ROTATE_90_CLOCKWISE)
                # hsv_mask = FrameSegmentation.color_mask_from_hsv(rotated, ['green','lime_green', 'black', 'red', 'brown'
                #                                                            , 'white'])
                # cv2.imshow(WINDOW_NAME, hsv_mask)

                # Object Detection using YOLO8n costume
                # rotated = cv2.rotate(accumulated_image, cv2.ROTATE_90_CLOCKWISE)
                # if rotated.ndim == 2 and rotated.shape[0] > 50 and rotated.shape[1] > 50:
                #     rotated_color = cv2.cvtColor(rotated, cv2.COLOR_GRAY2BGR)
                #     object_detected, OBJECT_Counter = ObjectDetection.apply_yolo8_costume(rotated_color,
                #                                                           save_enable=True,
                #                                                           counter=OBJECT_Counter)
                #     cv2.imshow(WINDOW_NAME, object_detected)
                # else:
                #     print(f"Skipping frame - invalid rotated shape:
                #     {rotated.shape if rotated is not None else 'None'}")

                # Anomaly Detection with Triplet Network
                rotated = cv2.rotate(accumulated_image, cv2.ROTATE_90_CLOCKWISE)
                if rotated.ndim == 2 and rotated.shape[0] > 50 and rotated.shape[1] > 50:

                    rotated_color = cv2.cvtColor(rotated, cv2.COLOR_GRAY2BGR)
                    object_with_anomaly_check = AnomalyDetection.apply_triplet_network(frame=rotated_color,
                                                                                       anchor_tensor=anchor_tensor,
                                                                                       embedding_network=embedding_net,
                                                                                       detection_model=yolo8n_costume,
                                                                                       threshold=1)
                    cv2.imshow(WINDOW_NAME, object_with_anomaly_check)
                else:
                    print(f"Skipping frame - invalid rotated shape: {rotated.shape if rotated is not None else 'None'}")

            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

        cap.release()
        cv2.destroyAllWindows()
    else:
        print('Failed to open camera stream.')
