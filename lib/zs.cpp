#include "zs.h"

zs::zs():
    radius(1),
    area(0.0)
{
    diameter=2*radius;
}

zs::zs(int input):
    radius(input),
    diameter(2*input),
    area(0.0)
{
}

zs::~zs()
{
}

void zs::calArea()
{
    area=3.14*3.14*radius;
}

double zs::getArea()
{
    calArea();
    return area;
}
