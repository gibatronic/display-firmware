#pragma once
#include <Adafruit_NeoPixel.h>

class Display {
private:
    Adafruit_NeoPixel shield;
    byte led_index = 0;
    byte color_index = 0;
    byte colors[4];
    byte leds;
public:
    Display(byte leds = 40, byte pin = 6);
    void setup();
    void reset();
    void pushColor(byte color);
};
