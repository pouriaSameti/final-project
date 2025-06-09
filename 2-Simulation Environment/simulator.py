import os
import sys
import pygame
import numpy as np

SHOW_ANOMALY_OBJECT_PROBABILITY = 0.2


class LineScanSimulator:
    def __init__(self, width=800, height=200, fps=60, number_of_objects=8, shape_mode=False,
                 object_width=50, object_height=100, object_step=5, object_delimiter=8,
                 background_color=(0, 0, 0)):

        pygame.init()
        self.width = width
        self.height = height
        self.fps = fps
        self.bg_color = background_color
        self.obj_color = (255, 0, 0)
        self.obj_width = object_width
        self.obj_height = object_height
        self.obj_step = object_step
        self.object_delimiter = object_delimiter
        self.shape_mode = shape_mode
        self.__number_of_objects = number_of_objects

        self.screen = pygame.display.set_mode((self.width, self.height))
        pygame.display.set_caption("Line Scan Camera Simulation")
        self.clock = pygame.time.Clock()

        if not self.shape_mode:
            self.real_object_img = self.__load_image('object/real_object')
            self.anomaly_object_img = self.__load_image('object/anomaly_object')
        else:
            self.real_object_img = None
            self.anomaly_object_img = None

        self.objects = []
        self.spawn_initial_objects()
        self.running = False

    def spawn_initial_objects(self):
        x = 0
        for _ in range(self.__number_of_objects):
            obj = self.create_new_object(x)
            self.objects.append(obj)
            x += self.obj_width + self.object_delimiter

    def create_new_object(self, x_pos=None):
        if self.shape_mode:
            return {"x": x_pos if x_pos is not None else self.width, "type": "shape", "image": None}
        else:
            is_anomaly = np.random.random() < SHOW_ANOMALY_OBJECT_PROBABILITY
            img = self.anomaly_object_img if is_anomaly else self.real_object_img
            return {"x": x_pos if x_pos is not None else self.width, "type": "image", "image": img}

    def handle_events(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                self.running = False

    def update_objects(self):
        for obj in self.objects:
            obj["x"] += self.obj_step
            if obj["x"] >= self.width:
                obj["x"] = -self.obj_width

    def draw(self):
        self.screen.fill(self.bg_color)
        for obj in self.objects:
            x = obj["x"]
            y = (self.height - self.obj_height) // 2
            if obj["type"] == "shape":
                pygame.draw.rect(self.screen, self.obj_color, (x, y, self.obj_width, self.obj_height))
            elif obj["image"]:
                self.screen.blit(obj["image"], (x, y))
        pygame.display.flip()

    def run(self):
        self.running = True
        while self.running:
            self.clock.tick(self.fps)
            self.handle_events()
            self.update_objects()
            self.draw()
        pygame.quit()
        sys.exit()

    def __load_image(self, folder):
        files = os.listdir(folder)
        for filename in files:
            if filename.lower().endswith(('.png', '.jpg', '.jpeg')):
                path = os.path.join(folder, filename)
                img = pygame.image.load(path)
                img = pygame.transform.scale(img, (self.obj_width, self.obj_height))
                return img
        return None
