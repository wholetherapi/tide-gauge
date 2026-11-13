#include <Arduino.h>

const int TRIG = 5;
const int ECHO = 6;
const int WINDOW = 32;

float averageLevel() {
  unsigned long total = 0;
  for (int i = 0; i < WINDOW; i++) {
    total += pulseIn(ECHO, HIGH, 30000UL);
    delay(20);
  }
  return total / (float)WINDOW;
}

void loop() {
  Serial.println(averageLevel());
  delay(60000);
}
