//未通过
#include <iostream>
#include <vector>

using namespace std;

int cal_sum(long long num);
string output_pinyin(int num);

string array[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main()
{
	long long num;
	cin >> num;
	//cout << cal_sum(123) << endl;
	//cout << array[2] << endl;
	//cout << output_pinyin(123) << endl;
	cout << output_pinyin(cal_sum(num)) << endl;
	return 0;
}

inline int cal_sum(long long num)
{
	int sum = 0;
	while(num)
	{
		sum+=(num%10);
		num/=10;
	}
	return sum;
}
inline string output_pinyin(int num)
{
	int a[100];
	string str = "";
	int den=10;
	int count=0;
	while(num)
	{
		a[count]=num%10;
		num/=10;
		count+=1;
	}
	for(int i=count-1;i>0;i--)
	{
		str+=(array[a[i]]);
		str+=" ";
	}
	str+=array[a[0]];
	return (str);
}

/*
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <stack>
using namespace std;

char str[10][10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

void Fun(int a, int sum)
{
    if(a){
        Fun(a/10, sum);
        cout << str[a%10];
        if(a != sum)
            cout << " ";
    }
}

void solve()
{
    int sum = 0;
    char ch;
    while((ch = getchar()) != '\n'){
        sum += ch - '0';
    }
    Fun(sum, sum);
}

int main()
{
    solve(); 
    return 0;
}
*/