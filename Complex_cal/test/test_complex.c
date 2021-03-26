#include "unity.h"
#include "complex.h"

static complex_t c1 = {0, 0};
static complex_t c2 = {0, 0};
static complex_t result = {0, 0};
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_zero(void)
{
    // Can ommi the below intialization as it is done at the declaration time
    c1.real = 0;
    c1.imaginary = 0;
    
    c2.real = 0;
    c2.imaginary = 0;
    
    TEST_ASSERT_EQUAL(result, sum(c1, c2));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.imaginary);
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST();
  RUN_TEST();
  RUN_TEST();

  /* Close the Unity Test Framework */
  return UNITY_END();
}