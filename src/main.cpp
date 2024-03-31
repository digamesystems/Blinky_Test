#include <Arduino.h>
#include <esp/dio/blinky.hpp>
#include <math/basic/myFunctions.hpp>


void setup() {
  Serial.begin(115200);
  while (!Serial);
  Serial.flush();
  Serial.println( add(5, 10) );
  setupBlinky();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  setBlinky(true);
  delay(1000);
  setBlinky(false);
  delay(1000);
} 




