from simulator import LineScanSimulator

if __name__ == "__main__":
    sim = LineScanSimulator(
        width=1900,
        height=980,
        fps=32,
        background_color=(224, 224, 224),
        object_width=580,
        object_height=580,
        object_step=8,
        object_delimiter=32,
        shape_mode=False,
        number_of_objects=4
    )
    sim.run()
