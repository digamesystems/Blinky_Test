#include <Arduino.h>
#include <ArduinoUnit.h>
#include "myFunction.h"


test(myFunctionTest) {
    // Test case 1: x = 5, y = 10
    int result1 = myFunction(5, 10);
    assertEqual(result1, 15);

    // Test case 2: x = -3, y = 7
    int result2 = myFunction(-3, 7);
    assertEqual(result2, 4);

    // Test case 3: x = 0, y = 0
    int result3 = myFunction(0, 0);
    assertEqual(result3, 0);
}


test(failingFooTest){
    assertEqual(1, 3);
}


void setup() {

  Serial.begin(115200);
  while (!Serial);
  Serial.flush();

  Serial.println( myFunction(5, 10) );

}

void loop() {
  Test::run();
} 




