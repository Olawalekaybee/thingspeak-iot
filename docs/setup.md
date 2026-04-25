# Setup Guide

## Requirements

* ESP32 or ESP8266
* PlatformIO installed
* ThingSpeak account

---

## Steps
1. Clone repository:

   ```bash
   git clone https://github.com/olawalekaybee/thingspeak-iot.git
   cd thingspeak-iot
   ```

2. Open in VS Code

3. Create secrets file:

   ```cpp
   src/secrets.h
   ```

4. Upload code:

   ```bash
   pio run --target upload
   ```

5. Monitor serial:

   ```bash
   pio device monitor
   ```

---

## Expected Result

Device connects to WiFi and sends data to ThingSpeak.
