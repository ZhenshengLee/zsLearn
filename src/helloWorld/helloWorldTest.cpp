#include <gtest/gtest.h>

#include "helloWorld.h"

TEST(hello_world, integer)
{
    helloWorld helloWorld_circle(1);
    double expected = 9.8596;
    double actual = helloWorld_circle.getArea();
    ASSERT_EQ(expected, actual);
}

class helloWorldTest : public ::testing::Test
{
  protected:
    virtual void SetUp() {}

    virtual void TearDown() {}

};

TEST_F(helloWorldTest, helloWorldTest_integer_returnEQ)
{
    helloWorld helloWorld_circle(1);
    double expected = 9.8596;
    double actual = helloWorld_circle.getArea();
    ASSERT_EQ(expected, actual);
}
