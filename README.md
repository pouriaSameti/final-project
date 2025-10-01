# Development of a Testing and Evaluation Platform for Vision Systems Based on Line-Scan Cameras and Deep Learning Models


## Overview
This project focuses on developing a testing and evaluation platform for vision systems based on line-scan cameras and machine learning models. The project is divided into several main parts:

  1. **Camera Setup and Parameter Configuration GUI**: A user-friendly graphical interface is created to set and adjust the parameters of the line-scan camera, such as exposure, line rate, width, and height.
  2. **Simulation Environment**: An environment simulating industrial conditions is designed, where objects move in and out of the camera’s field of view. This setup allows real-time video acquisition using the line-scan camera.
  3. **Image Processing and Computer Vision Tasks**: The acquired real-time images are processed using classical image processing and computer vision techniques, including segmentation, thresholding, object detection, object tracking, and anomaly detection.

The platform integrates hardware control, real-time acquisition, and advanced vision processing, providing a comprehensive framework for testing and evaluating machine vision systems.

This project was developed under the **Cyber-Physical Systems Laboratory** of the Computer Engineering Faculty at the University of Isfahan and is intended for **quality inspection in industrial environments using line-scan cameras**.

**Supervisors**: Dr. Ali Bohloli and Dr. Hossein Mahvash Mohammadi, University of Isfahan

----------------------------------
## Camera Setup and Parameter Configuration GUI
A robust, cross-platform Graphical User Interface (GUI) developed with Qt/C++ to control and configure Basler Line Scan Cameras in real-time. This project is essential for industrial machine vision and research, offering precise, stable, and dynamic parameter management.

### Key Features
  + **Real-Time Control**: Instantly adjust key camera parameters grouped into Analog, Acquisition, and Image Format controls.
  + **Dual Input System**: Tune values using both Sliders (quick adjustment) and Spin Boxes (high precision).
  + **Stable Acquisition**: Features advanced event handling to synchronize the Basler Pylon thread with the Qt GUI thread, ensuring continuous, deadlock-free image display.
  + **Default Management**: Easily Apply changes or Reset all parameters to their initial default values.

### Technologies
  + **C++**: Primary programming language.
  + **Qt 6.9.1**: Cross-platform GUI framework.
  + **Basler Pylon 8.1.0 SDK**: API for camera communication.
  + **MSVC2022 64-bit**: Required compiler due to Pylon SDK dependencies.
  + **CMake**: Build system.

### Setup & Prerequisites
1. Install Basler Pylon Software (SDK is required).
2. Install Qt Creator with the MSVC2022 64-bit kit selected.
3. Configure your CMakeLists.txt to properly link the Pylon libraries (PylonBase, PylonUtility, etc.).
4. Use the Pylon Viewer's Camera API Generator tool to create the necessary camera header files within the project.

<img width="1388" height="932" alt="Screenshot 2025-10-01 214837" src="https://github.com/user-attachments/assets/3cad3457-429f-4946-b210-7af631a205a2" />

----------------------------------
## Simulation Environment
This module simulates an industrial environment where objects move through the field of view of a line-scan camera. It is designed to generate synthetic real-time data for testing computer vision algorithms such as segmentation, thresholding, object detection, tracking, and anomaly detection.
The simulation uses Pygame to visualize moving objects and supports both shape-based and image-based objects (normal and anomaly).

### Features
Simulates a conveyor-like industrial setup with moving objects.

Two modes of operation:
  + **Shape mode**: Renders simple rectangles as objects.
  + **Image mode**: Loads real and anomaly objects from object/ folder.

Configurable parameters:
  + Screen size (width, height)
  + FPS (simulation speed)
  + Object size (object_width, object_height)
  + Object spacing (object_delimiter)
  + Object movement step (object_step)
  + Number of objects in scene
  + Random insertion of anomaly objects with a set probability.
  + Real-time visualization using Pygame.

### Applications

  + Testing machine vision pipelines without real hardware.
  + Generating synthetic conveyor-like image streams.
  + Studying object motion, detection, and anomaly identification in a controlled environment.

### Requirements
Install the dependencies before running:

```bash
pip install pygame numpy
```

### Project Structure

 ```php
2-Simulation Environment/
  │── simulator.py     
  │── main.py  
  │── object/
  │   ├── real_object/ 
  │   └── anomaly_object/
```


<img width="1900" height="833" alt="Screenshot 2025-10-01 220250" src="https://github.com/user-attachments/assets/68098ac3-4e73-470b-815b-452100d50a1b" />
