#include <Arduino.h>
#include "secrets.h"

#if defined(ESP32)
  #include <WiFi.h>
#elif defined(ESP8266)
  #include <ESP8266WiFi.h>
#endif

const char* ssid = WIFI_SSID;
const char* password = WIFI_PASSWORD;

const char* server = "api.thingspeak.com";
String writeApiKey = API_KEY;

unsigned long lastSendTime = 0;
const unsigned long sendInterval = 20000; // 20 seconds

void connectWiFi() {
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi connected");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void sendToThingSpeak(float temperature, float humidity) {
  WiFiClient client;

  if (client.connect(server, 80)) {
    String url = "/update?api_key=" + writeApiKey +
                 "&field1=" + String(temperature) +
                 "&field2=" + String(humidity);

    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                 "Host: " + server + "\r\n" +
                 "Connection: close\r\n\r\n");

    Serial.println("Data sent to ThingSpeak:");
    Serial.println(url);
  } else {
    Serial.println("Connection to ThingSpeak failed");
  }

  client.stop();
}

void setup() {
  Serial.begin(115200);
  delay(1000);
  connectWiFi();
}

void loop() {
  if (millis() - lastSendTime >= sendInterval) {
    lastSendTime = millis();

    float temperature = random(250, 350) / 10.0; // demo value
    float humidity = random(400, 800) / 10.0;    // demo value

    sendToThingSpeak(temperature, humidity);
  }
}