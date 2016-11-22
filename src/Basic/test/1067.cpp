// 插入与归并
// Created by zs on 16-9-5.
// 11/25
// 编写的二路归并排序通不过，插入排序可以的
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

void ins_sort(int* arr, int n, int* check, int& outcome)
{
    outcome=0;
    bool next=true;
    for(int p=1; p<n; p++)
    {
        int temp=*(arr+p);
        for(int q=p-1; q>=0; q--)
        {
            if(temp<*(arr+q))
            {
                *(arr+q+1)=*(arr+q);
                *(arr+q)=temp;
            }
            else
            {
                *(arr+q+1)=temp;
                break;
            }
        }
        if(!next)
            return;
        for(int x=0; x<n; x++)
        {
            if(*(arr+x)==*(check+x))
            {
                if(x==n-1)
                {
                    outcome=1;
                    next=false;
                }
            }
            else break;
        }
    }

    return;
}

void merge(int arr[], int low, int mid, int high)
{
    int* temp_a=new int[high-low+1];
    int index=0;
    int i,j,m,n;
    for(i=low, j=mid+1; i<=mid&&j<=high;)
    {
        if(arr[i]<arr[j])
        {
            temp_a[index]=arr[i];
            i++;
        }
        else
        {
            temp_a[index]=arr[j];
            j++;
        }
        index++;
    }
    while(j<=high)
        {
            temp_a[index]=arr[j];
            index++;
            j++;
        }
    while(i<=mid)
        {
            temp_a[index]=arr[i];
            index++;
            i++;
        }
    for(m=0,n=low; n<=high; m++, n++)
    {
        arr[n]=temp_a[m];
    }
    delete [] temp_a;

    return;
}
void mer_sort(int arr[], int n, int* check, int& outcome)
{
    outcome=0;
    bool next=true;
    int i;
    for(int length=1; length<n; length*=2)
    {
        for(i=0; i+2*length-1<n; i=i+2*length)
            merge(arr, i, i+length-1, i+2*length-1);
        if(i+length-1<n)
            merge(arr, i, i+length-1, n-1);
    }
    if(!next)
        return;
    for(int x=0; x<n; x++)
    {
        if(*(arr+x)==*(check+x))
        {
            if(x==n-1)
            {
                outcome=1;
                next=false;
            }
        }
        else break;
    }

    return;
}

void print(int* arr, int n, bool end_space)
{
    for(int i=0; i<n; i++)
    {
        cout << *(arr+i);
        if(end_space||(i<n-1))
            cout << " ";
    }
    return;
}
int main()
{
    int cnt;
    int is_ins;
    int is_mer;
    cin >> cnt;
    int ins_arr[cnt];
    int mer_arr[cnt];
    int check[cnt];
    for(int i=0; i<cnt; i++)
    {
        cin >> ins_arr[i];
        mer_arr[i]=ins_arr[i];
    }
    for(int j=0; j<cnt; j++)
    {
        cin >> check[j];
    }
    ins_sort(ins_arr, cnt, check, is_ins);
//    print(mer_arr, cnt, false);
//    cout << endl;
    mer_sort(mer_arr, cnt, check, is_mer);
//    print(mer_arr, cnt, false);
//    cout << endl;
    if(is_ins)
    {
        cout << "Insertion Sort" << endl;
        print(ins_arr, cnt, false);
    }
    if(is_mer) {
        cout << "Merge Sort" << endl;
        print(mer_arr, cnt, false);
    }

    return 0;
}