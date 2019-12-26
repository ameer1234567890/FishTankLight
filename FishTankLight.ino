#include <FastLED.h>
#define LED_PIN 2
#define NUM_LEDS 30
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  // fill_solid(leds, NUM_LEDS, CRGB(255,0,0));
  fill_solid(leds, NUM_LEDS, CRGB::Violet);
  FastLED.setBrightness(255);
  FastLED.show();
}
void loop() {
}
