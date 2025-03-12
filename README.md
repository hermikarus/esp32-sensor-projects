# ESP32 Sensor Projects

Welcome to the **ESP32 Sensor Projects** repository!  
This repository contains multiple projects demonstrating how to use different sensors with **ESP32S NodeMCU V1.1**.  
Each project is implemented using both **Arduino and ESP-IDF frameworks** in the **PlatformIO development environment**.

## 📌 Repository Structure

This repository is organized into two main sections based on the framework used:

📂 **esp32-sensor-projects/**  
├── 📂 **arduino-framework/** *(Projects using Arduino framework)*  
│   ├── 📂 **pir_sensor_project/** *(PIR motion sensor project)*  
│   ├── 📂 **...more upcoming projects...*  
│  
├── 📂 **esp-idf-framework/** *(Projects using ESP-IDF framework)*  
│   ├── 📂 **pir_sensor_project/** *(PIR motion sensor project)*  
│   ├── 📂 **...more upcoming projects...*  
│  
└── 📜 **README.md** *(This file - project introduction)*  

Each project contains:  
- A **detailed README** explaining sensor usage and wiring.  
- Source code written in **C++ for Arduino** and **C for ESP-IDF**.  
- Instructions on how to run the project in **PlatformIO**.

## 🚀 Current Projects

### **1️⃣ PIR Motion Sensor Project**
- Uses **HC-SR501 PIR motion sensor** with ESP32.
- Detects motion and prints the result to the serial monitor.
- Implemented in **both Arduino and ESP-IDF frameworks**.

📂 **Project Links:**  
🔹 [Arduino Framework PIR Sensor Project](arduino-framework/pir_sensor_project)  
🔹 [ESP-IDF Framework PIR Sensor Project](esp-idf-framework/pir_sensor_project)  

## 🔧 Required Tools

To work with these projects, you need:

1. **ESP32S NodeMCU V1.1 Development Board**  
2. **PlatformIO Installed on VS Code**  
   - [Installation Guide](https://platformio.org/install)  
3. **ESP-IDF (For ESP-IDF Projects)**  
   - [ESP-IDF Setup Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/)  

## 📂 How to Clone & Run

To clone and explore the projects:

```bash
git clone https://github.com/hermikarus/esp32-sensor-projects.git
cd esp32-sensor-projects

