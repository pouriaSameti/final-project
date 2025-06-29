from onvif_manager import ONVIFCameraManager
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
SAMPLING_INTERVAL_SECONDS = 0.25  # one sample every 0.25 seconds (4 samples per second)
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

                rotated = cv2.rotate(accumulated_image, cv2.ROTATE_90_CLOCKWISE)
                cv2.imshow(WINDOW_NAME, rotated)

            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

        cap.release()
        cv2.destroyAllWindows()
    else:
        print('Failed to open camera stream.')
