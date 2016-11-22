//未通过
#include <iostream>
#include <cstdio>  
#include <string>  
#include <cstring>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;


void print_int_array(int* a, int begin, int end, bool endspace)
{
	for(int i=begin-1;i<end;i++)
	{
		cout << *(a+i);
		if((endspace)||(i!=end-1))
			cout << " ";
	}
	return;
}

int main()
{
	int cnt, digit;
	cin >> cnt >> digit;
	int array[100];
	for(int i=0;i<cnt;i++)
	{
		cin >> array[i];
	}
	if(cnt==digit)
		print_int_array(array, 1, cnt, false);
	else
	{
		print_int_array(array, cnt-digit+1, cnt, true);
		print_int_array(array, 1, cnt-digit, false);
	}
	




	return 0;
}
