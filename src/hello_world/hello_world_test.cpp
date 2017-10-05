#include <gtest/gtest.h>

#include "zs.h"

TEST(hello_world, integer)
{
    int expected = 2;
    int actual = zs(1);
    ASSERT_EQ(expected, actual);
}