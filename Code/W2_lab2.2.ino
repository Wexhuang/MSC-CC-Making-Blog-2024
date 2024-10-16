#include <Adafruit_NeoPixel.h>

#define PIN 6          // 定义灯带连接的引脚
#define NUMPIXELS 60   // 定义灯带上的像素数量

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();       // 初始化灯带
  strip.setBrightness(20); // 设置亮度（0-255）
  strip.show();        // 确保所有像素初始化时为关闭状态
}

void loop() {
  colorCycle(10);          // 运行循环颜色渐变效果
  movingBar(80, strip.Color(255, 0, 0)); // 红色跨条移动效果
  flashEffect(5, 250);      // 随机闪烁效果
  randomColorFill(100);    // 随机颜色填充效果
}

// 1. 循环颜色渐变效果
void colorCycle(uint8_t wait) {
  for(uint16_t j = 0; j < 256; j++) {
    for(uint16_t i = 0; i < strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// 2. 跨条移动效果
void movingBar(uint8_t wait, uint32_t color) {
  for(uint16_t i = 0; i < strip.numPixels() - 5; i++) {
    strip.clear(); 
    for(uint16_t j = 0; j < 5; j++) {
      strip.setPixelColor(i + j, color);
    }
    strip.show();
    delay(wait);
  }
}

// 3. 随机闪烁效果
void flashEffect(uint8_t flashes, uint8_t wait) {
  for(uint8_t i = 0; i < flashes; i++) {
    for(uint16_t j = 0; j < strip.numPixels(); j++) {
      strip.setPixelColor(j, strip.Color(random(0, 255), random(0, 255), random(0, 255)));
    }
    strip.show();
    delay(wait);
    strip.clear();
    strip.show();
    delay(wait);
  }
}

// 4. 随机颜色填充效果
void randomColorFill(uint8_t wait) {
  for(uint16_t i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(random(0, 255), random(0, 255), random(0, 255)));
    strip.show();
    delay(wait);
  }
}

// 辅助函数：生成颜色渐变
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  } else {
    WheelPos -= 170;
    return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  }
}