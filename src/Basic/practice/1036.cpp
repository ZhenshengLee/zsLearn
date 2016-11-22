
#include <iostream>
#include<cstdio>  
#include<string>  
#include<cstring>
#include<vector>

using namespace std;


int main()
{
	int count=0;
	cin >> count;
	string max_name, min_name, temp_name;
	string max_id, min_id, temp_id;
	int max_score, min_score, temp_score;
	//init
	cin >> max_name >> max_id >> max_score;
	min_name=max_name;
	min_id=max_id;
	min_score=max_score;
	count--;
	//check and compare
	for(;count--;)
	{
		cin >> temp_name >> temp_id >> temp_score;
		if(temp_score>max_score)
		{
			max_name=temp_name;
			max_id=temp_id;
			max_score=temp_score;
		}
		if(temp_score<min_score)
		{
			min_name=temp_name;
			min_id=temp_id;
			min_score=temp_score;
		}
	}
	cout << max_name+" "+max_id << endl;
	cout << min_name+" "+min_id << endl;
	

	return 0;
}
