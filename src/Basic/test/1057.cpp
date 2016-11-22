//
// Created by zs on 16-9-5.
//
// 15/25
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

typedef struct LNode
{
	int add;
	int data;
	int ne_add;
	LNode* next;
} LinkList;

void print(int num)
{
	if(num!=-1)
	{
		cout << setw(5) << setfill('0') << num;
	}
	else cout << num;
}
void display(LNode * L)
{
	LNode* p=L;
	while(p->next!=NULL)
	{
		print(p->add);
		cout << " " << p->data << " ";
		print(p->ne_add);
		cout << endl;

		p=p->next;
	}
	print(p->add);
	cout << " " << p->data << " ";
	print(p->ne_add);

	return;
}

LNode* reverse_k(LNode* L, int k)
{
	LNode* temp_N;
	int temp_na;
	LNode* p=L;
	LNode* q=L->next;

	for(int m=0; m<k-1; m++)
	{
		temp_N=q->next;
		q->next=p;
		q->ne_add=p->add;
		p=q;
		q=temp_N;

	}
	L->next=q;
	L->ne_add=q->add;

	return p;
}

int main(){
	int head_add;
	int link_num;
	int k;
	int head_index;
	int temp_index;
	cin >> head_add >> link_num >> k;
	LNode link_list[link_num];
	for(int i=0; i<link_num; i++)
	{
		cin >> link_list[i].add >> link_list[i].data >> link_list[i].ne_add;
		if(link_list[i].add==head_add)
			head_index=i;
		if(link_list[i].ne_add==(-1))
			link_list[i].next=NULL;
	}
	temp_index=head_index;
	for(int j=0; j<link_num; j++)
	{
		for(int p=0; p<link_num; p++)
		{
			if(link_list[p].add==link_list[temp_index].ne_add)
			{
				link_list[temp_index].next=&link_list[p];
				temp_index=p;
				break;
			}
		}
	}
//	display(&link_list[head_index]);
//	cout << endl;
	// reverse from K
	LNode* a=reverse_k(&link_list[head_index], k);
	display(a);



	return 0;
}