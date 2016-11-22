
#include <iostream.h>

using namespace std;

int callatz(int num, int& count);
bool is_odd(int num);

int main()
{
	int count = 0;
	int num;
	cin >> num;
	cout << callatz(num, count) << endl;
	return 0;
}


int callatz(int num, int& count)
{
	if(num == 1)
		return count;
	else if(is_odd(num))
		return callatz((3*num+1)/2, ++count);
	else return callatz(num/2, ++count);
}

inline bool is_odd(int num)
{
	return (num%2);
}

