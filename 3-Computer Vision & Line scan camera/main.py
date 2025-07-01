from onvif_manager import ONVIFCameraManager
from classic_segmentation import FrameSegmentation
from cv_tasks import ObjectDetection
import cv2
import numpy as np
import time

# ONVIF Camera Connection Settings
HOST = '192.168.1.1'
PORT = 8899
USERNAME = 'admin'
PASSWORD = '@sdf1234'
WSDL_DIR = 'C:\\python-onvif-zeep\\wsdl'

# Line Scan Parameters
LINE_INDEX = 270
MAX_LINES = 540
SAMPLING_INTERVAL_SECONDS = 0.125  # one sample every 0.25 seconds (4 samples per second)
WINDOW_NAME = "Line Scan Simulation"


if __name__ == '__main__':
    camera_manager = ONVIFCameraManager(HOST, PORT, USERNAME, PASSWORD, WSDL_DIR)
    camera_manager.connect()
    rtsp_url = camera_manager.get_rtsp_url()
    print("RTSP Stream URL:", rtsp_url)

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

                # Object Detection using YOLO8n
                rotated = cv2.rotate(accumulated_image, cv2.ROTATE_90_CLOCKWISE)
                if rotated.ndim == 2 and rotated.shape[0] > 50 and rotated.shape[1] > 50:
                    rotated_color = cv2.cvtColor(rotated, cv2.COLOR_GRAY2BGR)
                    object_detected = ObjectDetection.apply_yolo(rotated_color)
                    cv2.imshow(WINDOW_NAME, object_detected)
                else:
                    print(f"Skipping frame - invalid rotated shape: {rotated.shape if rotated is not None else 'None'}")

            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

        cap.release()
        cv2.destroyAllWindows()
    else:
        print('Failed to open camera stream.')
