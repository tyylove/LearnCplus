#include"Car.h"
#include<iostream>
using namespace std;
void Car::close()
{
	//string str;
	cout << "请选择对窗户的操作：";
	cin >> m_Windows;
	if (m_Windows == "down")
	{
		cout << "窗户已关闭" << endl;
	}
	else
	{
		cout << "窗户已打开" << endl;
	}
}

void Car::open()
{
	cout << "请选择对窗户的操作：";
	cin >> m_Windows;
	if (m_Windows == "up")
	{
		cout << "窗户已打开" << endl;
	}
	else
	{
		cout << "窗户已关闭" << endl;
	}
}