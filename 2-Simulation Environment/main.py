from simulator import LineScanSimulator

if __name__ == "__main__":
    sim = LineScanSimulator(
        width=1900,
        height=980,
        fps=32,
        background_color=(216, 216, 216),
        object_width=512,
        object_height=512,
        object_step=8,
        shape_mode=False,
        number_of_objects=6
    )
    sim.run()
