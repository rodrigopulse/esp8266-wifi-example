## Objective
The primary objective of this project is to provide a foundation for establishing a WiFi connection with the ESP8266 microcontroller using PlatformIO. The code serves as a starting point for developers aiming to integrate WiFi capabilities into their ESP8266 projects.

# ESP8266 WiFi Connection Project

Welcome to the ESP8266 WiFi Connection Project repository! This project focuses on establishing WiFi connectivity using the ESP8266 microcontroller. Whether you're new to IoT development or looking to integrate WiFi capabilities into your ESP8266-based projects, this codebase provides a fundamental starting point.

## Overview
The repository demonstrates a basic setup to connect the ESP8266 to a WiFi network using PlatformIO. The provided code establishes a connection to a specified WiFi network, showcasing the process of joining and maintaining a stable connection. The project's simplicity allows for easy understanding and modification according to your specific project requirements.

## Getting Started
Follow the steps below to set up the project and establish WiFi connectivity using PlatformIO.

### Install PlatformIO:
Ensure PlatformIO is installed. If not, follow the [installation guide](https://docs.platformio.org/en/latest/core/installation.html).

### Initialize Environment Variables:

Create a file named `.env` in the project root and add your WiFi credentials:
SSID=YOUR_WIFI_SSID
PASSWORD=YOUR_WIFI_PASSWORD

### Visual Studio Code configuration files:

```shell
platformio init --ide vscode
```

### Lib Dependencies:

```shell
pio run
```

### Upload and monitor

```shell
pio run --target upload
```

```shell
pio device monitor
```


