#include"../3_Implementation/Unity/src/unity.h"
#include"calc.h"
#include"../3_Implementation/Unity/src/unity_internals.h"
#include"../3_Implementation/Unity/src/unity.c"

void setUp()
{

}
void tearDown()
{

}
void test_sum(void)
{
    //double n1=15000,n2=500;
    TEST_ASSERT_EQUAL(15500,sum(15000,500));
    
}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    return UNITY_END();
}