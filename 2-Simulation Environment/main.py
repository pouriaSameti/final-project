# main.py

from simulator import LineScanSimulator

if __name__ == "__main__":
    sim = LineScanSimulator(
        width=1900,
        height=1000,
        fps=5,
        background_color=(50, 60, 90),
        object_width=256,
        object_height=128,
        object_step=16
    )
    sim.run()
