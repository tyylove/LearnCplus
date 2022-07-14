#ifndef _CALCULTOR_H_
#define _CALCULTOR_H_
#include<iostream>
using namespace std;
//除法
double divi(double num1, double num2)
{
	if (num2 == 0)
	{
		cout << "除数不能为0" << endl;
		return 0;
	}
	return (num1 / num2);
}
//乘法
double mul(double num1, double num2)
{
	return (num1 * num2);
}
//减法
double sub(double num1, double num2)
{
	return (num1 - num2);
}
//加法
double add(double num1, double num2)
{
	return (num1 + num2);
}
#endif