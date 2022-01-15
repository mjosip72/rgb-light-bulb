
#include <Arduino.h>
#include <FastLED.h>

#define DATA_PIN 27

const uint8_t length = 36;
CRGB leds[length];

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, length);
}

void loop() {


  
}
