import os
import sys
import pygame


class LineScanSimulator:
    def __init__(self, width=800, height=200, fps=60, shape_mode=False, object_width=50, object_height=100, object_step=5,
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
        self.shape_mode = shape_mode

        self.screen = pygame.display.set_mode((self.width, self.height))
        pygame.display.set_caption("Line Scan Camera Simulation")
        self.clock = pygame.time.Clock()

        if not self.shape_mode:
            self.object = self.__load_images('object/real_object')

        self.obj_x = -self.obj_width
        self.obj_y = (self.height - self.obj_height) // 2

        self.running = False

    def handle_events(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                self.running = False

    def update_object_position(self):
        self.obj_x += self.obj_step
        if self.obj_x > self.width:
            self.obj_x = -self.obj_width

    def draw(self):
        self.screen.fill(self.bg_color)
        if self.shape_mode:
            pygame.draw.rect(self.screen, self.obj_color,
                             (self.obj_x, self.obj_y, self.obj_width, self.obj_height))
        else:
            self.screen.blit(self.object, (self.obj_x, self.obj_y))
        pygame.display.flip()

    def run(self):
        self.running = True
        while self.running:
            self.clock.tick(self.fps)
            self.handle_events()
            self.update_object_position()
            self.draw()
        pygame.quit()
        sys.exit()

    def __load_images(self, folder):
        filename = os.listdir(folder)[0]
        if filename.lower().endswith(('.png', '.jpg', '.jpeg')):
            path = os.path.join(folder, filename)
            img = pygame.image.load(path)
            img = pygame.transform.scale(img, (self.obj_width, self.obj_height))
            return img
        return None
