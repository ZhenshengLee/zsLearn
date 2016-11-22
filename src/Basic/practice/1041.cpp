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

void print_string_vector(vector<string> & process, bool forward, bool end_space)
{
	if(forward)
	{
		for(vector<string>::iterator it1=process.begin(); it1!=process.end(); it1++)
		{
			cout << *it1;
			if((end_space)||(it1!=process.end()-1))
				cout << " ";
		}
	}
	else
	{
		for(vector<string>::iterator it2=process.end()-1; it2!=process.begin()-1; it2--)
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
	string temp;
	vector<string> array;
	while((cin >> temp).get(c))
	{
		array.push_back(temp);
		if(c=='\n')
			break;
	}

	print_string_vector(array, false, false);
	
	




	return 0;
}

/*
	int arr[100];
	int temp;
	int count=0;
	char c;
	while(((cin>>temp).get(c)))
	{
     
		arr[count]=temp;
		if(c=='\n')
			break;
		count++;
		if(count>=100)
			break;
	}
	for(int i=0;i<=count;i++)
		cout<<arr[i]<<" ";
*/
