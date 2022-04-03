#include "unity.h"
#include "unity_internals.h"
#include<math.h>
#include "fun.h"
#include "fun.h"
#define PROJECT_NAME    "ElectronicCircuitAnalyzer"
void setUp(){}
void tearDown(){}
void test_battery_data(void);
void test_capacitor(void);
void test_inductor(void);
int main()
{
  Mm *frequency, *capacitance, *inductance, *battery, *resistance, freq, res, induc, cap, bat;
  UNITY_BEGIN();
  RUN_TEST(test_battery_data);
  RUN_TEST(test_capacitor);
  RUN_TEST(test_inductor);
  return UNITY_END();
}
void test_battery_data(void){
    TEST_ASSERT_EQUAL(0.005, battery_data(1,9,0.005,5,0.2));
    TEST_ASSERT_EQUAL(0.01, battery_data(1,1.5,0.01,5,0.2));
    TEST_ASSERT_EQUAL(0.0075, battery_data(1,4.5,0.03,5,0.3));
    TEST_ASSERT_EQUAL(0.012, battery_data(2,3.7,0.01,3,0.4));
}
void test_capacitor(void){
    TEST_ASSERT_EQUAL((3.979), (capacitor(10,4,3,-6)));
    TEST_ASSERT_EQUAL((4.547), (capacitor(7,5,6,-9)));
}
void test_inductor(void){
    TEST_ASSERT_EQUAL(48.066, inductor(17,4.5,5,-6));
    TEST_ASSERT_EQUAL(0.305, inductor(6.332,7.667,3,-6));
}