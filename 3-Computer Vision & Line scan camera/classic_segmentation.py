import numpy as np
import cv2


class FrameSegmentation:

    @staticmethod
    def apply_segmentation(frame, segments=8):
        segmented = np.zeros_like(frame)
        h = frame.shape[0]
        seg_height = h // segments

        for i in range(segments):
            start = i * seg_height
            end = (i + 1) * seg_height if i < segments - 1 else h
            segment = frame[start:end, :]
            _, thresh = cv2.threshold(segment, 0, 255, cv2.THRESH_BINARY + cv2.THRESH_OTSU)
            segmented[start:end, :] = thresh

        return segmented

