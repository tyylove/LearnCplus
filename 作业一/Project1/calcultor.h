#ifndef _CALCULTOR_H_
#define _CALCULTOR_H_
#include<iostream>
using namespace std;
//����
double divi(double num1, double num2)
{
	if (num2 == 0)
	{
		cout << "��������Ϊ0" << endl;
		return 0;
	}
	return (num1 / num2);
}
//�˷�
double mul(double num1, double num2)
{
	return (num1 * num2);
}
//����
double sub(double num1, double num2)
{
	return (num1 - num2);
}
//�ӷ�
double add(double num1, double num2)
{
	return (num1 + num2);
}
#endif