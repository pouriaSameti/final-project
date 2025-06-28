from onvif import ONVIFCamera
from urllib.parse import urlparse, urlunparse


class ONVIFCameraManager:
    def __init__(self, host, port, username, password, wsdl_dir):
        self.host = host
        self.port = port
        self.username = username
        self.password = password
        self.wsdl_dir = wsdl_dir
        self.camera = None
        self.media_service = None
        self.profile = None

    def connect(self):
        self.camera = ONVIFCamera(
            host=self.host,
            port=self.port,
            user=self.username,
            passwd=self.password,
            wsdl_dir=self.wsdl_dir
        )
        self.media_service = self.camera.create_media_service()
        self.profile = self.media_service.GetProfiles()[0]

    def get_rtsp_url(self):
        stream_setup = self.media_service.create_type('GetStreamUri')
        stream_setup.StreamSetup = {
            'Stream': 'RTP-Unicast',
            'Transport': {'Protocol': 'RTSP'}
        }
        stream_setup.ProfileToken = self.profile.token
        uri_response = self.media_service.GetStreamUri(stream_setup)
        rtsp_url = uri_response.Uri

        # Add credentials if missing
        parsed = urlparse(rtsp_url)
        if parsed.username is None:
            netloc = f"{self.username}:{self.password}@{parsed.hostname}"
            if parsed.port:
                netloc += f":{parsed.port}"
            rtsp_url = urlunparse(parsed._replace(netloc=netloc))

        return rtsp_url
