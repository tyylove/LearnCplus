#include"���������.h"
#include<iostream>
using namespace std;
Point::Point(int a, int b)
{
	m_a = a;
	m_b = b;
}
//ǰ��++
Point& Point::operator++()
{
	m_a++;
	m_b++;
	return *this;
}

//����++
Point& Point::operator++(int)
{
	Point temp(m_a,m_b);
	m_a++;
	m_b++;
	return temp;
}

void Point::show()
{
	cout << "xΪ�� " << m_a << endl << "yΪ�� " << m_b << endl;
}