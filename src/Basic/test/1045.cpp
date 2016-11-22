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

int main()
{
	int pm, pn;
	cin >> pm >> pn;
	int cnt=1;
	int out_cnt=0;
	if(pm==1)
	{
		cout << "2" << " ";
		out_cnt++;
	}
	for(int i=3; (i<=10000)&&(cnt<pn); i++)
	{
		if(check(i))
		{
			cnt++;	
			if(cnt>=pm)
			{
				out_cnt++;
				if((out_cnt!=0)&&((out_cnt%10)==0))
					cout << i << endl;
				else if(cnt!=pn)
					cout << i << " ";
				else cout << i;
			}
		}
		
	}







	return 0;
}
*/