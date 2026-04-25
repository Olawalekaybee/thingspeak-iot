# 🌐 IoT ThingSpeak Monitoring System

![Build](https://img.shields.io/badge/build-passing-brightgreen)
![Status](https://img.shields.io/badge/status-active-success)
![Contributions](https://img.shields.io/badge/contributions-welcome-blue)
![PlatformIO](https://img.shields.io/badge/PlatformIO-Ready-orange)
![License](https://img.shields.io/badge/License-MIT-green)

---

## 📖 Overview

This project is a **WiFi-enabled IoT monitoring system** built with **PlatformIO**, **ESP32/ESP8266**, and **ThingSpeak** for real-time sensor data collection and visualization.

It demonstrates how to collect environmental data and send it to the cloud for monitoring and analysis.

---

## ✨ Features

* 📡 WiFi-enabled data transmission
* 📊 Real-time visualization using ThingSpeak
* ⚙️ Modular PlatformIO project structure
* 🔐 Secure API key handling via `secrets.h`
* 🔌 Compatible with ESP32 and ESP8266

---

## 🏗️ System Architecture

```text
Sensor → ESP32/ESP8266 → WiFi → ThingSpeak → Dashboard
```

---

## 📊 Dashboard Preview

![ThingSpeak Chart](assets/thingspeak-chart.png)

---

## 🧰 Tech Stack

* **PlatformIO** (VS Code)
* **C++** (Arduino Framework)
* **ESP32 / ESP8266**
* **ThingSpeak Cloud**
* **NVIDIA DGX Spark** (Development Environment)

---

## ⚙️ Setup Instructions

Detailed setup guide available here:
👉 [docs/setup.md](docs/setup.md)

---

## 🔐 Environment Configuration

Create a secrets file:

```cpp
// src/secrets.h
#define WIFI_SSID "your_wifi"
#define WIFI_PASSWORD "your_password"
#define API_KEY "your_thingspeak_key"
```

> ⚠️ Ensure `secrets.h` is added to `.gitignore` to protect sensitive information.

---

## 🔌 ThingSpeak Integration

**Endpoint:**

```text
https://api.thingspeak.com/update
```

**Example Request:**

```text
https://api.thingspeak.com/update?api_key=KEY&field1=25&field2=60
```

---

## 📁 Project Structure

```text
src/        # Main application code  
lib/        # External libraries  
docs/       # Documentation  
assets/     # Images and screenshots  
```

---

## 📊 Example Output

* **Field 1** → Temperature
* **Field 2** → Humidity

---

## 🚀 Future Improvements

* 🌡️ Integrate multiple sensors (gps/display)
* 🔄 Implement OTA firmware updates
* 📱 Build a mobile dashboard (React Native)
* 🤖 Add AI-based analytics using DGX Spark

---

## 🤝 Contributing

Contributions are welcome!

Please read 👉 [CONTRIBUTING.md](CONTRIBUTING.md) before submitting a pull request.

---

## 📄 License

This project is licensed under the **MIT License**.
