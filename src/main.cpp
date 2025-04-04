#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("✅ Serial is working! Hello from M5Atom test sketch.");
}

void loop() {
  Serial.println("Looping...");
  delay(1000);
}
