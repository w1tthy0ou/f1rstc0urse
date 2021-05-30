#define BOOST_TEST_MODULE CommonMathTest
#include <unit_test.hpp>
#include <iostream>
#define _USE_MATH_HELPERS_
#include "common_math.h"

BOOST_AUTO_TEST_SUITE( CommonMathMacrosTests )

BOOST_AUTO_TEST_CASE( CubeIntTest)
{
    int n = 10;
    for (int i = 1; i <= n; ++i)
    {
        int expected = (i + 1)*(i + 1)*(i + 1);
        int actual = CUBE(i + 1);
        BOOST_CHECK_EQUAL(expected, actual);
    }

}

BOOST_AUTO_TEST_CASE( CubeRealTest)
{
    double a = -10, b = 10, h = 0.5;
    for (double x = a; x <= b; x += h) {
        double shift = 0.3423552;
        double expected = (x + shift) * (x + shift) * (x + shift);
        double actual = CUBE(x + shift);
        BOOST_CHECK_CLOSE(expected, actual, 0.001);
    }

}

BOOST_AUTO_TEST_CASE( NRootTestODD)
{
    double a = -10, b = 10, h = 0.5;
    for (double x = a; x <= b; x += h)
    {
        double expected = x < 0 ? -pow(abs(x), 1.0/3) : pow(x, 1.0/3);
        double actual = N_ROOT(x, 3);
        BOOST_CHECK_CLOSE(expected, actual, 0.001);
    }
}

BOOST_AUTO_TEST_SUITE_END()
