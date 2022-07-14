#pragma once
class Point
{
public:
	Point(int a,int b);
	Point& operator++();
	Point& operator++(int);
	void show();
private:
	int m_a;
	int m_b;

};