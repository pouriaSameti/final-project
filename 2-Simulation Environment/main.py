# main.py

from simulator import LineScanSimulator

if __name__ == "__main__":
    sim = LineScanSimulator(
        width=1024,
        height=1024,
        fps=10
    )
    sim.run()
