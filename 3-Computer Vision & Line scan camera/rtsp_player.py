import cv2


class RTSPVideoPlayer:
    def __init__(self, rtsp_url, window_name="ONVIF Real-Time Video"):
        self.rtsp_url = rtsp_url
        self.window_name = window_name
        self.cap = None

    def open_stream(self):
        self.cap = cv2.VideoCapture(self.rtsp_url)
        return self.cap.isOpened()

    def display(self):
        if self.cap is None or not self.cap.isOpened():
            raise RuntimeError("Stream not opened.")

        cv2.namedWindow(self.window_name, cv2.WINDOW_NORMAL)
        cv2.resizeWindow(self.window_name, 960, 540)

        while True:
            ret, frame = self.cap.read()
            if not ret:
                print("Lost connection to the stream.")
                break
            cv2.imshow(self.window_name, frame)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

        self.cap.release()
        cv2.destroyAllWindows()
