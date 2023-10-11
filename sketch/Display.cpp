#include "Display.h"
#include <Arduino.h>

Display::Display(
    byte leds,
    byte pin
) :
    leds(leds),
    shield(leds, pin, NEO_GRBW + NEO_KHZ800) {
};

void Display::setup() {
    shield.begin();
    shield.show();
    shield.setBrightness(51);
};

void Display::pushColor(byte color) {
    colors[color_index] = color;
    color_index = (color_index + 1) % 4;

    if (color_index != 0) return;

    shield.setPixelColor(led_index, shield.gamma32(shield.Color(colors[0], colors[1], colors[2], colors[3])));
    led_index = (led_index + 1) % leds;

    if (led_index != 0) return;

    shield.show();
};
