from onvif_manager import ONVIFCameraManager
from rtsp_player import RTSPVideoPlayer
import cv2


HOST = '192.168.1.1'
PORT = 8899
USERNAME = 'admin'
PASSWORD = '@sdf1234'
WSDL_DIR = 'C:\python-onvif-zeep\wsdl'
WINDOW_NAME = 'Line Scan Camera'


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

        while True:
            ret, frame = cap.read()
            if not ret:
                print("Lost connection to the stream.")
                break
            cv2.imshow(WINDOW_NAME, frame)

            if cv2.waitKey(1) & 0xFF == ord('q'):
                cv2.destroyAllWindows()
                break
    else:
        print('Failed to open camera stream.!!!')
