#include"重载运算符.h"
#include<iostream>
using namespace std;
int main()
{
	Point p(1,2);
	cout << "初始数据：" << endl;
	p.show();
	cout << "前置++的数据：" << endl;
	p++;
	p.show();
	cout << "后置++的数据：" << endl;
	++p;
	p.show();
	return 0;
}