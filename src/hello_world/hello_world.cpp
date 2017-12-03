#include <iostream>

#include "zs.h"

using namespace std;

int main()
{
    int radius;
    cout << "Please input the radius of the circle" << endl;
    // cin >> radius;
    radius = 3;
    if (0 > radius)
    {
        cout << "error!" << endl;
        return -1;
    }
    zs zs_circle(radius);
    cout << "Hello, world";
    cout << "the area of zs_circle is " << zs_circle.getArea() << endl;

    return 0;
}
