#include"Car.h"
#include<iostream>
using namespace std;
void Car::close()
{
	//string str;
	cout << "��ѡ��Դ����Ĳ�����";
	cin >> m_Windows;
	if (m_Windows == "down")
	{
		cout << "�����ѹر�" << endl;
	}
	else
	{
		cout << "�����Ѵ�" << endl;
	}
}

void Car::open()
{
	cout << "��ѡ��Դ����Ĳ�����";
	cin >> m_Windows;
	if (m_Windows == "up")
	{
		cout << "�����Ѵ�" << endl;
	}
	else
	{
		cout << "�����ѹر�" << endl;
	}
}