#include"重载运算符.h"
#include<iostream>
using namespace std;
Point::Point(int a, int b)
{
	m_a = a;
	m_b = b;
}
//前置++
Point& Point::operator++()
{
	m_a++;
	m_b++;
	return *this;
}

//后置++
Point& Point::operator++(int)
{
	Point temp(m_a,m_b);
	m_a++;
	m_b++;
	return temp;
}

void Point::show()
{
	cout << "x为： " << m_a << endl << "y为： " << m_b << endl;
}