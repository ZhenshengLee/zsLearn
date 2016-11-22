//1038
#include <iostream>
#include<cstdio>  
#include<string>  
#include<cstring>
#include<vector>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;


int main()
{
	int num;
	string b, s;
	long g=0;
	int temp=1;
	cin >> num;
	int digits[3]={0, 0, 0};
	digits[0]=(num/100)%10;
	digits[1]=(num/10)%10;
	digits[2]=(num/1)%10;
	while(digits[0])
	{
		s+="B";
		digits[0]--;
	}
	while(digits[1])
	{
		s+="S";
		digits[1]--;
	}
	while(digits[2])
	{
		g+=(digits[2]*temp);
		temp*=10;
		digits[2]--;
	}
	if(g)
		cout << b << s << g;
	else
		cout << b << s;



	return 0;
}

