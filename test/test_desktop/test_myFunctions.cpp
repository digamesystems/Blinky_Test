#include <math/basic/myFunctions.hpp>
#include <unity.h>
#include <stdexcept>

void setUp(void)
{
  // set stuff up here
}

void tearDown(void)
{
  // clean stuff up here
}

void test_math_add(void)
{
  int expected = 15;
  int actual = add(5, 10);
  TEST_ASSERT_EQUAL(expected, actual);
}

void test_math_subtract(void)
{
  int expected = 15;
  int actual = subtract(30, 15);
  TEST_ASSERT_EQUAL(expected, actual);
}

void test_math_divide(void)
{
  int expected = 15;
  int actual = divide(30, 2);
  TEST_ASSERT_EQUAL(expected, actual);
}

void test_math_divide_by_zero(void)
{
  try
  {
    divide(60, 0);
    TEST_FAIL_MESSAGE("Expected exception not thrown");
  }
  catch (const std::exception &e)
  {
    TEST_ASSERT_EQUAL_STRING("Division by zero", e.what());
  }
}

int runUnityTests(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_math_add);
  RUN_TEST(test_math_subtract);
  RUN_TEST(test_math_divide);
  RUN_TEST(test_math_divide_by_zero);
  return UNITY_END();
}

// WARNING!!! PLEASE REMOVE UNNECESSARY MAIN IMPLEMENTATIONS //

/**
 * For native dev-platform or for some embedded frameworks
 */
int main(void)
{
  return runUnityTests();
}
