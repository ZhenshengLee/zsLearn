//未通过
#include <iostream>
#include<cstdio>  
#include<string>  
#include<cstring>
#include<vector>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;



int callatz(int num, vector<int> &temp)
{
	if(num == 1)
		return 0;
	if(num%2)
		num=((3*num+1)/2);
	else num=(num/2);
	if(!count(temp.begin(), temp.end(), num))
		temp.push_back(num);
	callatz(num, temp);
}
int print(vector<int> & process)
{
	for(vector<int>::iterator it0=process.begin(); it0!=process.end(); it0++)
		cout << *it0 << " ";
	cout << endl;
	return 0;
}
int print_v(vector<int> & process)
{
	for(vector<int>::iterator it0=process.end()-1; it0!=process.begin(); it0--)
	{
		cout << *it0;
		if(it0!=process.begin()+1)
			cout << " ";
	}
	//cout << endl;
	return 0;
}

int main()
{
	//init and construct
	int count_num=0;
	int num;
	cin >> count_num;
	vector<int> original;
	vector<int> process;
	vector<int> output;
	for(;count_num--;)
	{
		cin >> num;
		original.push_back(num);
		callatz(num, process);
	}
	//print(original);
	//print(process);
	for(vector<int>::iterator it=original.begin()-1; it!=original.end(); it++)
	{
		if(!count(process.begin(), process.end(), *it))
			output.push_back(*it);
	}
//	for(vector<int>::iterator it2=output.begin(); it2!=output.end(); it2++)
//		cout << *it2 << " ";
	sort(output.begin(),output.end());
	print_v(output);
	

	return 0;
}

