#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 16
#define BUTTON 5

int direction = 1;
int currentled = 0;

int red = 0;
int green = 0;
int blue = 0;


Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  strip.begin();
  strip.show();
  Serial.begin(9600);
}

void loop() {

  red = random(0,255);
  green = random(0,255);
  blue = random(0,255);

  if (!digitalRead(BUTTON)) {
    direction = -direction;
    Serial.println("change");
  }

  strip.clear();
  strip.setPixelColor(currentled, strip.Color(red, green, blue));
  strip.show();
  currentled += direction;

  if (currentled >= NUMPIXELS) {
    currentled = 0;
  }
  else if (currentled < 0) {
    currentled = NUMPIXELS - 1;
  }
  delay(200);
}

