#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <stdlib.h>

const char* ssid = getenv("SSID");
const char* password = getenv("PASSWORD");

ESP8266WebServer server(80);

int pin = D1;

void handleOn() {
  String json = "{ \"message\": \"on\" }";
  digitalWrite(pin, HIGH);
  server.send(200, "application/json", json);
}

void handleOff() {
  String json = "{ \"message\": \"off\" }";
  digitalWrite(pin, LOW);
  server.send(200, "application/json", json);
}

void setup() {
  Serial.begin(115200);

  pinMode(pin, OUTPUT);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println(".");
  }
  Serial.println("WiFi connected!");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/on", handleOn);
  server.on("/off", handleOff);
  server.begin();
  Serial.println("Server started");
}

void loop() {
  server.handleClient();
}
