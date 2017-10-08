#include <iostream>
#include "logging.h"

#include "zs.h"

using namespace std;

int main()
{
	LOG_INIT("HelloWorld");
	LOG_CONFIG();
	int radius;
	cout << "Please input the radius of the circle" << endl;
	// cin >> radius;
	radius =3;
	if (0>radius)
	{
		cout << "error!" << endl;
		return -1;
	}
	zs zs_circle(radius);
	LOG_DEBUG("Hello, world");
	cout << "the area of zs_circle is " << zs_circle.getArea() << endl;

	return 0;
}
