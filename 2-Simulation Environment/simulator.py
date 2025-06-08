import pygame
import sys


class LineScanSimulator:
    def __init__(self, width=800, height=200, fps=60):
        pygame.init()
        self.width = width
        self.height = height
        self.fps = fps
        self.bg_color = (0, 0, 0)
        self.obj_color = (255, 0, 0)
        self.obj_width = 50
        self.obj_height = 100
        self.obj_speed = 5

        self.screen = pygame.display.set_mode((self.width, self.height))
        pygame.display.set_caption("Line Scan Camera Simulation")
        self.clock = pygame.time.Clock()

        self.obj_x = -self.obj_width
        self.obj_y = (self.height - self.obj_height) // 2

        self.running = False

    def handle_events(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                self.running = False

    def update_object_position(self):
        self.obj_x += self.obj_speed
        if self.obj_x > self.width:
            self.obj_x = -self.obj_width

    def draw(self):
        self.screen.fill(self.bg_color)
        pygame.draw.rect(self.screen, self.obj_color,
                         (self.obj_x, self.obj_y, self.obj_width, self.obj_height))
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
