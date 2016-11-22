#include "stdafx.h"
/*
#include <iostream>
#include <cstdio>  
#include <string>  
#include <cstring>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <iomanip>

using namespace std;

// 宏声明

// 全局变量声明

// 函数定义
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
	int cnt;
	int original[1000];
	int a1=0, a2=0, a3=0, a5=-1;
	float a4=0.0;
	int check_a2=0, check_a4=0;
	int flag_first=1;
	char c;
	int temp;
	int j=0;
	while((cin >> temp).get(c))
	{
		if(flag_first)
		{
			cnt=temp;
			flag_first=0;
		}
		else original[j++]=temp;
		if(c=='\n')
			break;
	}
	//cout << cnt << endl;
	//print_int_array(original, 1, cnt, false);
	//cout << endl;
	int mul=1;
	int num_cnt=1;
	for(int i=0; i<cnt; i++)
	{
		switch(original[i]%5)
		{
		case 0:
			if(!(original[i]%2))
				a1+=original[i];
			break;
		case 1:
			a2=a2+mul*original[i];
			mul*=-1;
			break;
		case 2:
			check_a2=1;
			a3++;
			break;
		case 3:
			check_a4=1;
			a4=a4+(original[i]-a4)/(float)(num_cnt);
			num_cnt++;
			break;
		case 4:
			if(a5<original[i])
				a5=original[i];
			break;
		}
	}
	if(a1)
		cout << a1 ;
	else cout << "N";
	cout << " ";
	if(check_a2)
		cout << a2;
	else cout << "N";
	cout << " ";
	if(a3)
		cout << a3;
	else cout << "N";
	cout << " ";
	if(check_a4)
		cout << fixed << setprecision(1) <<a4;
	else cout << "N";
	cout << " ";
	if(a5!=-1)
		cout << a5;
	else cout << "N";







	return 0;
}
*/