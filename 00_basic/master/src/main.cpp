#include <Arduino.h>
#include <Wire.h>

#define SLAVE_ID 8

void setup() {
  Wire.begin();
  Serial.begin(115200);
}

void loop() {
  Wire.requestFrom(SLAVE_ID, 1);

  while (Wire.available()) {
    byte datum = Wire.read();
    Serial.println(datum);
  }

  delay(500);
}
