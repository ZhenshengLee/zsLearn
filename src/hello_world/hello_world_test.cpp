#include <gtest/gtest.h>

#include "zs.h"

TEST(hello_world, integer)
{
    zs zs_circle(1);
    double expected = 9.8596;
    double actual = zs_circle.getArea();
    ASSERT_EQ(expected, actual);
}