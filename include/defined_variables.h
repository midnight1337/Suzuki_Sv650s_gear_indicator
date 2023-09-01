#include <Arduino.h>

#ifndef HARDWARE_H
#define HARDWARE_H

#define DS18B20_ONE_WIRE_PIN 2
#define BATTERY_PIN A0
#define GEARBOX_PIN A1

#define BATTERRY_LOW_LEVEL 12

#define SCREEN_WIDTH 128U // OLED display width, in pixels
#define SCREEN_HEIGHT 64U // OLED display height, in pixels
#define OLED_RESET -1

#define MAIN_LOOP_TIME 1000U
#define STARTUP_TIME 2000U
#define STARTUP_TEXT "BOOTING"

#define GEAR_N "N"
#define VOLTAGE_SIGN "V"
#define TEMPERATURE_SIGN "C"
#define TEMPERATURE_TITLE "T:"
#define TEMPERATURE_ERROR "ERR"
#define SUZUKI_TITLE "SUZUKI SV650S"
#define GITHUB "github/midnight1337"

#define R_TOP 46000U     // Resistor forming voltage divider for gearbox
#define R_BOTTOM 4600U

#define VCC 5.0f
#define MAX_SAMPLES 1023.0f

#define LOW_TEMPERATURE_THRESHOLD 5U
#define LOW_BATTERY_THRESHOLD 12U

#endif