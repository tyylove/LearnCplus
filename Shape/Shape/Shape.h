#pragma once
#include<iostream>
#define PI 3.14
using namespace std;
class Shape
{
public:
	virtual double  Area() = 0;
	virtual void  PrintfResult() = 0;
	virtual void Set_r(double a) = 0;
	virtual double Get_r() = 0;
	virtual void Set_h(double b) = 0;
	virtual double Get_h() = 0;
	
private:
	double SideLength;
};

class Circle :public Shape
{
public:
	double Area()
	{
		double S;
		S = PI * r * r;
		return S;
	}
	void PrintfResult()
	{
		cout << "面积是：" << Area() << endl;

	}
	void Set_r(double a)
	{
		r = a;
	}
	double Get_r()
	{
		return r;
	}

	double Get_h()
	{
		return 0;
	}
	void Set_h(double b)
	{
		
	}
private:
	double r;
	double h;
};

class Cylinder:public Shape
{
public:
	double Area()
	{
		double C,S;
		C = 2 * PI * r;
		S = 2 * PI * r * r + C * h;
		return S;
	}
	void PrintfResult()
	{
		cout << "面积是：" << Area() << endl;

	}
	void Set_r(double a)
	{
		r = a;
	}
	double Get_r()
	{
		return r;
	}

	void Set_h(double b)
	{
		h = b;
	}

	double Get_h()
	{
		return h;
	}
private:
	double r;
	double h;
};

