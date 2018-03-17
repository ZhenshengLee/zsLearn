#include <gtest/gtest.h>

#include "helloWorld.h"

TEST(hello_world, integer)
{
    helloWorld helloWorld_circle(1);
    double expected = 9.8596;
    double actual = helloWorld_circle.getArea();
    ASSERT_EQ(expected, actual);
}