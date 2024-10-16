#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 16

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN ,NEO_GRB + NEO_KHZ800);

void setup(){
  strip.begin(); 
  strip.show();
}

void loop(){
  strip.clear();
    for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    strip.setPixelColor(i, strip.Color(0,0,255));
    strip.setPixelColor(3,strip.Color(0,255,0));

    strip.show();   // Send the updated pixel colors to the hardware.

    delay(100); // Pause before next pass through loop
  }
}