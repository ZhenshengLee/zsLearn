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


void print_int_vector(vector<int> & process, bool forward, bool end_space)
{
	if(forward)
	{
		for(vector<int>::iterator it1=process.begin(); it1!=process.end(); it1++)
		{
			cout << *it1;
			if((end_space)||(it1!=process.end()-1))
				cout << " ";
		}
	}
	else
	{
		for(vector<int>::iterator it2=process.end()-1; it2!=process.begin()-1; it2--)
		{
		cout << *it2;
		if((end_space)||(it2!=process.begin()))
			cout << " ";
		}
	}
	return;
}


int main()
{
	char c;
	int temp;
	vector<int> array;
	while((cin >> temp).get(c))
	{
		array.push_back(temp);
		if(c=='\n')
			break;
	}
	//print_int_vector(array, true, false);
	vector<int> new_array;
	if((array.size()==2)&&(*(array.end()-1)==0))
	{
		new_array.push_back(0);
		new_array.push_back(0);
	}
	else
	for(vector<int>::iterator it=array.begin(); it!=array.end();it+=2)
	{
		if(*(it+1)!=0)
		{
			new_array.push_back((*it)*(*(it+1)));
			new_array.push_back(*(it+1)-1);
		}
	}
	print_int_vector(new_array, true, false);
	




	return 0;
}