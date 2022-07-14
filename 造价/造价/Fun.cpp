#include"Fun.h"
#include<iostream>
using namespace std;
void Pool::set_R()
{
	float r;
	cout << "请输入泳池半径：";
	cin >> r;
	R = r;
}

void Pool::put_R()
{
	cout << "游泳池半径为：" << R << endl;
}

void Pool::fence()
{
	float c,price;
	c = 2 * PI * R;
	cout << "栅栏长为：" << c << endl;
	price = 35 * c;
	cout << "栅栏费用为：" << price << endl;
}

void Pool::aside()
{
	float s1, s2, price;
	s1= PI * R * R;
	s2 = PI * (R + 3) * (R + 3);
	price = (s2 - s1) * 20;
	cout << "过道面积为：" << s2 - s1 << endl;
	cout << "过道造价为：" << price << endl;
}