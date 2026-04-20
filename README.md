# AI GPU + MCU LeNet Deployment System

## Overview
This project implements a full machine learning pipeline across GPU and embedded hardware:

- Jetson Nano: CNN training using CUDA acceleration
- MSP430FR5994: Quantized inference on microcontroller
- UART communication between PC and MCU for image transfer

---

## Architecture
PC → UART → MSP430 → Inference → Classification Result

Jetson Nano is used for training and model evaluation.

---

## Features
- LeNet CNN implementation
- CUDA-accelerated training (Jetson Nano)
- Embedded C inference (MSP430FR5994)
- UART communication protocol
- Quantized model support (int8 / fixed-point)

---

## Technologies
- Python (PyTorch)
- CUDA
- Embedded C (MSP430)
- UART serial communication

---

## Results
- High accuracy CNN training on Jetson Nano
- Real-time inference on MSP430 MCU
- Optimized memory usage for embedded deployment

---

## Authors
- Your Name
