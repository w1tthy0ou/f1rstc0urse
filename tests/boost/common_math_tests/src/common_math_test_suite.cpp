#include <unit_test.hpp>
#include <iostream>
#define _USE_MATH_HELPERS_
#include "common_math.h"

BOOST_AUTO_TEST_SUITE( CommonMathFunctionsTests )

BOOST_AUTO_TEST_CASE( RandomIntGenerate)
{
    int n = 20, offset = 5;
    for (int i = 1; i <= n; i += offset)
    {
        int actual = common::math::generate_random(i, i + offset);
        BOOST_CHECK((actual >= i && actual < i + offset));
    }

}

BOOST_AUTO_TEST_SUITE_END()
