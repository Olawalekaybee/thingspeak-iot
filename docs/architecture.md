---
noteId: "6d80ff60408311f1a25c6b964c62f9d3"
tags: []

---

# System Architecture

## Overview

This system consists of:

* IoT Device (ESP32/ESP8266)
* Cloud Platform (ThingSpeak)
* Development System (DGX Spark)

---

## Flow

```
Sensor → ESP32 → WiFi → ThingSpeak → Dashboard
```

---

## Components

### 1. ESP Device

* Reads sensor data
* Sends HTTP requests

### 2. ThingSpeak

* Stores data
* Visualizes charts

### 3. DGX Spark

* Development environment
* Can be used for AI/analytics later
