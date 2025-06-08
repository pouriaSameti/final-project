from simulator import LineScanSimulator

if __name__ == "__main__":
    sim = LineScanSimulator(
        width=1900,
        height=980,
        fps=32,
        background_color=(216, 216, 216),
        object_width=1000,
        object_height=1000,
        object_step=8,
        shape_mode=False
    )
    sim.run()
