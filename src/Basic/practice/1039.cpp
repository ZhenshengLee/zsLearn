
#include <iostream>
#include<cstdio>  
#include<string>  
#include<cstring>
#include<vector>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

bool check(int num)
{
	int k=sqrt(num)+1;
	for(int i=2;i!=k;i++)
	{
		if((num%i==0)&&(num!=i))
			return false;
	}
	return true;
}
int print(vector<int> & process)
{
	for(vector<int>::iterator it0=process.begin(); it0!=process.end(); it0++)
		cout << *it0 << " ";
	cout << endl;
	return 0;
}

int main()
{
	int num;
	int cnt=0;
	vector<int> array;
	cin >> num;
	for(int i=2;i<=num;i++)
	{
		if(check(i))
		{
			array.push_back(i);
		}
	}
	//cout << check(3);
	//print(array);
	vector<int>::iterator it1=array.begin(), it2=array.begin()+1;
	for(;(it1!=array.end())&&(it2!=array.end());)
	{
		if((*it2-*it1)==2)
		{
			cnt++;
			it1=it2;
			it2=it1+1;
		}
		else
		{
			it1=it2;
			it2=it1+1;
		}
	}
	cout << cnt;




	return 0;
}

