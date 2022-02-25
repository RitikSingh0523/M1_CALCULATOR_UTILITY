#define UNITY_INCLUDE_DOUBLE()
#include"unity.h"
#include"../calc.h"
#include"unity_internals.h"
#include"unity.c"

void setUp()
{

}
void tearDown()
{

}
void test_subs(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(14500,substract(15000,500));
    TEST_ASSERT_EQUAL_DOUBLE(1000,substract(1500,500));
    TEST_ASSERT_EQUAL_DOUBLE(-500,substract(500,1000));
}
void test_sum(void)
{
    //double n1=15000,n2=500;
    TEST_ASSERT_EQUAL_DOUBLE(15500,sum(15000,500));
    TEST_ASSERT_EQUAL_DOUBLE(2000,sum(1500,500));
    //TEST_ASSERT_EQUAL(2000,sum(15001,500)); IT SHOULD FAIL
}
void test_mul(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(1782443,mul(2587,689));
    TEST_ASSERT_EQUAL_DOUBLE(934160.75,mul(2598.5,359.5));
    TEST_ASSERT_EQUAL_DOUBLE(9726558.704,mul(2658.256,3659));

}
void test_div(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(3,div(1500,500));
    TEST_ASSERT_EQUAL_DOUBLE(0.5,div(1,2));
    TEST_ASSERT_EQUAL_DOUBLE(0,div(1,0));

}
void test_sqr(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(25,square(5));
    TEST_ASSERT_EQUAL_DOUBLE(0.25,square(0.5));
    TEST_ASSERT_EQUAL_DOUBLE(6.25,square(2.5));
}
void simplei(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(500,simp(5000,5,2));
    TEST_ASSERT_EQUAL_DOUBLE(124.8,simp(800,5.2,3));
}
void facttest(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(120,facto(5));
    TEST_ASSERT_EQUAL_DOUBLE(720,facto(6));
}
void comyear(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(926.1,yearly(800,5,3));
    TEST_ASSERT_EQUAL_DOUBLE(7200,yearly(5000,20,2));
    
    
}
void comhyear(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(7320.5,hyear(5000,20,2));
}
void test_month(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(5000,monthly(4756.64120825,5,1));
}
void test_qtr(void)
{
    TEST_ASSERT_EQUAL_DOUBLE(5522.43051,quater(5000,5,2));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    RUN_TEST(test_subs);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);
    RUN_TEST(test_sqr);
    RUN_TEST(facttest);
    RUN_TEST(simplei);
    RUN_TEST(comyear);
    RUN_TEST(comhyear);
    RUN_TEST(test_qtr);
    RUN_TEST(test_month);
    return UNITY_END();
}