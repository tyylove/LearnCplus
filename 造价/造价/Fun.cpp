#include"Fun.h"
#include<iostream>
using namespace std;
void Pool::set_R()
{
	float r;
	cout << "������Ӿ�ذ뾶��";
	cin >> r;
	R = r;
}

void Pool::put_R()
{
	cout << "��Ӿ�ذ뾶Ϊ��" << R << endl;
}

void Pool::fence()
{
	float c,price;
	c = 2 * PI * R;
	cout << "դ����Ϊ��" << c << endl;
	price = 35 * c;
	cout << "դ������Ϊ��" << price << endl;
}

void Pool::aside()
{
	float s1, s2, price;
	s1= PI * R * R;
	s2 = PI * (R + 3) * (R + 3);
	price = (s2 - s1) * 20;
	cout << "�������Ϊ��" << s2 - s1 << endl;
	cout << "�������Ϊ��" << price << endl;
}