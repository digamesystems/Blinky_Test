#include <esp/dio/blinky.hpp>
#include <unity.h>
#include <stdexcept>

void setUp(void) {
  // set stuff up here    
  setupBlinky();
}

void tearDown(void) {
  // clean stuff up here
}

void test_turn_on(void) {
    setBlinky(true);
    int expected = 1;
    int actual = getBlinky();
    TEST_ASSERT_EQUAL(expected, actual);
}

void test_turn_off(void) {
    setBlinky(false);
    int expected = 0;
    int actual = getBlinky();
    TEST_ASSERT_EQUAL(expected, actual);
}

int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(test_turn_off);
  RUN_TEST(test_turn_on);
  delay(1000);
  RUN_TEST(test_turn_off);
  return UNITY_END();
}

// WARNING!!! PLEASE REMOVE UNNECESSARY MAIN IMPLEMENTATIONS //

/**
  * For native dev-platform or for some embedded frameworks
  */
void setup() {
   runUnityTests();
}

void loop() {
  // put your main code here, to run repeatedly:
}
