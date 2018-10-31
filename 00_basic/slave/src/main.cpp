#include <Arduino.h>
#include <Wire.h>

#define SLAVE_ID 8

byte count = 0;

void requestEvent();

void setup() {
  Wire.begin(SLAVE_ID);
  Wire.onRequest(requestEvent);
}

void loop() {
}

void requestEvent() {
  Wire.write(count++);
}
