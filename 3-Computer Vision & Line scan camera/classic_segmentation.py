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

    @staticmethod
    def color_mask_from_hsv(frame, color_names):

        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        hsv_color_ranges = {
            'red': [(0, 70, 50), (10, 255, 255), (170, 70, 50), (180, 255, 255)],
            'orange': [(11, 100, 100), (25, 255, 255)],
            'yellow': [(26, 100, 100), (34, 255, 255)],
            'lime_green': [(35, 70, 70), (50, 255, 255)],
            'green': [(51, 50, 50), (85, 255, 255)],
            'cyan': [(86, 50, 50), (100, 255, 255)],
            'light_blue': [(101, 70, 70), (115, 255, 255)],
            'blue': [(116, 50, 50), (130, 255, 255)],
            'purple': [(131, 50, 50), (150, 255, 255)],
            'magenta': [(151, 70, 70), (169, 255, 255)],
            'pink': [(160, 50, 150), (180, 255, 255)],
            'brown': [(0, 50, 50), (20, 150, 150)],
            'gray': [(0, 0, 50), (180, 50, 200)],
            'black': [(0, 0, 0), (180, 255, 30)],
            'white': [(0, 0, 200), (180, 30, 255)]
        }

        mask_total = np.zeros(hsv.shape[:2], dtype=np.uint8)

        for color in color_names:
            if color == 'red':
                lower1, upper1, lower2, upper2 = hsv_color_ranges['red']
                mask1 = cv2.inRange(hsv, np.array(lower1), np.array(upper1))
                mask2 = cv2.inRange(hsv, np.array(lower2), np.array(upper2))
                mask = cv2.bitwise_or(mask1, mask2)
            else:
                lower, upper = hsv_color_ranges[color]
                mask = cv2.inRange(hsv, np.array(lower), np.array(upper))

            mask_total = cv2.bitwise_or(mask_total, mask)

        return cv2.bitwise_not(mask_total)

