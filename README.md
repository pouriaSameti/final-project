# Development of a Testing and Evaluation Platform for Vision Systems Based on Line-Scan Cameras and Deep Learning Models


## Overview
This project focuses on developing a testing and evaluation platform for vision systems based on line-scan cameras and machine learning models. The project is divided into several main parts:

  1. **Camera Setup and Parameter Configuration GUI**: A user-friendly graphical interface is created to set and adjust the parameters of the line-scan camera, such as exposure, line rate, width, and height.
  2. **Simulation Environment**: An environment simulating industrial conditions is designed, where objects move in and out of the camera’s field of view. This setup allows real-time video acquisition using the line-scan camera.
  3. **Image Processing and Computer Vision Tasks**: The acquired real-time images are processed using classical image processing and computer vision techniques, including segmentation, thresholding, object detection, object tracking, and anomaly detection.

The platform integrates hardware control, real-time acquisition, and advanced vision processing, providing a comprehensive framework for testing and evaluating machine vision systems.

This project was developed under the **Cyber-Physical Systems Laboratory** of the Computer Engineering Faculty at the University of Isfahan and is intended for **quality inspection in industrial environments using line-scan cameras**.

**Supervisors**: Dr. Ali Bohloli and Dr. Hossein Mahvash Mohammadi, University of Isfahan


## Table of Contents
[Camera Setup and Parameter Configuration GUI](https://github.com/pouriaSameti/final-project?tab=readme-ov-file#camera-setup-and-parameter-configuration-gui)<br>
[Simulation Environment](https://github.com/pouriaSameti/final-project?tab=readme-ov-file#simulation-environment)<br>
[Image Processing and Object Segmentation](https://github.com/pouriaSameti/final-project?tab=readme-ov-file#image-processing-and-object-segmentation)<br>
[Computer Vision](https://github.com/pouriaSameti/final-project?tab=readme-ov-file#computer-vision)<br>

<br>

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

---------------------------------------------------------------------------
## Image Processing and Object Segmentation 

This module is responsible for the initial analysis and structural preparation of the continuous 2D images reconstructed from the line scan camera data. It applies classical computer vision techniques to isolate the products accurately, creating a clean dataset for subsequent intelligent analysis.

### Features
  + **Boundary Definition**: Precisely determines the physical boundaries of the product by separating the object from the background.
  + **Adaptive Segmentation**: Utilizes robust thresholding methods, including Adaptive Thresholding and Otsu Thresholding, to handle varying lighting conditions and material reflectance typical of industrial environments.
  + **Region-Based Isolation**: Implements Region Growing techniques to achieve highly accurate and contiguous object masks, minimizing noise and false positives.


### Applications
  + **Pre-Processing for AI**: Provides clean, segmented inputs.
  + **Object Mask Generation**: Generates binary masks essential for precise measurement and quality control features.
  + **Fundamental Defect Screening**: Can be used to detect large-scale, clear defects (e.g., missing chunks) that are easily identified by simple segmentation failure.

### Requirements
Install the dependencies before running:

```bash
pip install numpy
```

```bash
pip install opencv-python
```

### Project Structure

 ```php
3-Computer Vision & Line scan camera    
  │── main.py
  │── onvif_manager.py
  │── segmentation.py
```

<img width="735" height="283" alt="Screenshot 2025-10-07 204311" src="https://github.com/user-attachments/assets/59e4ec03-d8c7-438a-a778-90b931b0bfbc" />

-----------------------------------------------------------------
## Computer Vision

This module implements the core Machine Learning (ML) and Computer Vision (CV) logic, transforming the platform into a sophisticated, automated quality control and testing environment capable of real-time defect identification, tracking, and product management.

### Datasets and Training Methodology
The platform utilizes two specialized datasets for distinct vision tasks:

1. **Object Detection Dataset (YOLOv8n)**
  + **Model**: YOLOv8n (Nano) for high-speed object recognition and bounding box generation.
  + **Data Source**: Images acquired directly from the Basler Line Scan Camera and reconstructed into 2D frames.
  + **Preparation Tool**: Roboflow was used for dataset labeling, version control, and data augmentation to enhance model robustness.
  + **Goal**: Train the model to accurately detect and localize specific product classes on the moving line.

2. **Anomaly Detection Dataset (Triplet Network)**
  + **Model**: Custom Triplet Architecture trained to learn a low-dimensional (128-D) feature embedding space.
  + **Data Structure**: Structured as Triplets (Anchor, Positive, Negative), where: Anchor/Positive (Defect-free product images) and Negative (Images containing critical anomalies (e.g., micro-scratches, cracks)).
  + **Training**: Utilizes Triplet Loss to enforce a large separation margin between normal and anomalous samples.
  + **Goal**: High-fidelity identification of subtle, unstructured surface defects in real-time.

### Features
  + **Real-Time Object Detection (YOLOv8n)**: Integrates the lightweight YOLOv8n (Nano) model for sub-millisecond inference speed.
  + **High-Fidelity Anomaly Detection (Triplet Network)**: Identifies subtle defects by calculating feature vector distance from "normal" samples in the learned 128-D embedding space.
  + **Robust Object Tracking (ByteTrack)**: Combines YOLO detection with ByteTrack to assign a unique, persistent ID to objects for stable tracking and accurate counting.
  + **Automated Management**: Enables accurate product counting and targeted image saving of only defective samples.

### Requirements
Install the dependencies before running:

```bash
pip install numpy
```

```bash
pip install opencv-python
```

```bash
pip install torch
```

```bash
pip install torch-vision
```

```bash
pip install ultralytics
```

 ```php
3-Computer Vision & Line scan camera    
  │── main.py
  │── onvif_manager.py
  │── vision.py
  │── Saved Objects/
  │── object detection models/
  │   ├── best.pt
  │   ├── yolov8n.pt
  │   ├── yolov8n-custom.pt
```

 ```php
4-Train Neural Networks  
  │── Triplet Network/
  │   ├── embedding_net.pth
  │   ├── evaluation.ipynb
  │   ├── Triplet Network.ipynb
  │   ├── triplet_data/
  │   ├── triplet_data_test/

  │── YOLO8n/
  │   ├── runs/
  │   ├── test/
  │   ├── test_detect/
  │   ├── train/
  │   ├── valid/
  │   ├── data.yaml
  │   ├── README.dataset.txt
  │   ├── README.roboflow.txt
  │   ├── train logs.txt
  │   ├── test evaluation.ipynb
```
![photo_2025-07-02_17-47-20](https://github.com/user-attachments/assets/8fc2e908-796c-49ac-86ec-89ef379d7ae4)

![photo_2025-10-07_20-54-06](https://github.com/user-attachments/assets/d636d633-3c9b-4a60-b07a-9462ab345a19)


<img width="980" height="313" alt="Screenshot 2025-10-07 205429" src="https://github.com/user-attachments/assets/e2480228-b1c9-4452-b6b7-ee83b0b0d02e" />
