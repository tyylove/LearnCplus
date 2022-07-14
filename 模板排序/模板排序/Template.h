#pragma once
#include<iostream>
using namespace std;
#include<string>

template<class T>
void Myswap(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
//排序算法
template<class T>
void Mysort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大值的下标
		for (int j = i+1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;//更新最大值下标
			}
		}
		if (max != i)
		{
			Myswap(arr[max],arr[i]);
		}
	}
}

template<class T>
void PrintArray(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test1()
{
	char arr[] = "asdfgh";
	Mysort(arr, sizeof(arr)/sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}

void test2()
{
	int arr[] = { 1,2,7,5,3,9,0,4,6,8 };
	Mysort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}