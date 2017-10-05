#include <iostream>

#include "zs.h"

#include "logging.h"
#include "log4cxx/basicconfigurator.h"
#include <log4cxx/propertyconfigurator.h>

LOG_INIT("HelloWorld");

using namespace std;
using namespace log4cxx;

int main()
{
	BasicConfigurator::configure();
	int radius;
	cout << "Please input the radius of the circle" << endl;
	cin >> radius;
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
