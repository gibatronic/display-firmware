#include <Arduino.h>
#include "Display.h"

Display display;

void setup() {
    display.setup();
    Serial.begin(9600);
};

void loop() {
};

void serialEvent() {
    byte color = Serial.read();
    display.pushColor(color);
};
