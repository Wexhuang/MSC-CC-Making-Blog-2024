int value = 0;
int brightness = 0;

void setup() {
   pinMode(10, OUTPUT);
   pinMode(A0, INPUT);
   Serial.begin(9600);
}

void loop() {
  value = analogRead(A0);
  brightness = map(value, 0, 1023, 0, 255);
  Serial.println(brightness); // 显示映射后的亮度值
  analogWrite(10, brightness);
  delay(100); // 可选，防止串口打印太快
}