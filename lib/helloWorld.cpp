#include "helloWorld.h"

helloWorld::helloWorld():
    radius(1),
    area(0.0)
{
    diameter=2*radius;
}

helloWorld::helloWorld(int input):
    radius(input),
    diameter(2*input),
    area(0.0)
{
}

helloWorld::~helloWorld()
{
}

void helloWorld::calArea()
{
    area=3.14*3.14*radius;
}

double helloWorld::getArea()
{
    calArea();
    return area;
}
