#include <Arduino.h>
#include "Display.h"

Display display;
byte serialEventTimeout = 50; // milliseconds
unsigned long lastSerialEvent = 0;

void setup() {
    display.setup();
    Serial.begin(9600);
    Serial.println("!");
};

void loop() {
    if (lastSerialEvent == 0 || millis() - lastSerialEvent <= serialEventTimeout) return;

    lastSerialEvent = 0;
    display.reset();
};

void serialEvent() {
    lastSerialEvent = millis();
    display.pushColor(Serial.read());
};
