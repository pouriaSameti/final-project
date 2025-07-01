import numpy as np
import cv2


class FrameSegmentation:

    @staticmethod
    def apply_local_segmentation(frame, segments=8):
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

    @staticmethod
    def apply_region_growing(frame, threshold=20):
        h, w = frame.shape
        sub_height = h // 8
        full_mask = np.ones_like(frame, dtype=np.uint8) * 255

        neighbors = [(-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (-1, 1), (1, -1), (1, 1)]

        for i in range(8):
            y_start = i * sub_height
            y_end = (i + 1) * sub_height if i < 7 else h
            sub_frame = frame[y_start:y_end, :]
            sub_h, sub_w = sub_frame.shape
            mask = np.ones_like(sub_frame, dtype=np.uint8) * 255

            seed = (sub_w // 2, sub_h // 2)
            seed_value = sub_frame[seed[1], seed[0]]
            stack = [seed]

            while stack:
                x, y = stack.pop()
                if mask[y, x] == 255 and abs(int(sub_frame[y, x]) - int(seed_value)) < threshold:
                    mask[y, x] = 0
                    for dx, dy in neighbors:
                        nx, ny = x + dx, y + dy
                        if 0 <= nx < sub_w and 0 <= ny < sub_h:
                            stack.append((nx, ny))

            full_mask[y_start:y_end, :] = mask

        return full_mask


