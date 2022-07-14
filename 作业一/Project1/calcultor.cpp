#include<iostream>
#include<Windows.h>
#include"calcultor.h"
#include"show.h"
using namespace std;
int main()
{
	int choice;
	double a, b;
	while (1) {
		show();
		cout << "请输入你的选择:";
		cin >> choice;
		system("cls");
		cout << "请输入两个数:";
		cin >> a >> b;
		switch (choice) {
		case 1:cout <<"相加的结果是：" << add(a, b) << endl; break;
		case 2:cout <<"相减的结果是：" << sub(a, b) << endl;  break;
		case 3:cout <<"相乘的结果是：" << mul(a, b) << endl; break;
		case 4:cout <<"相除的结果是：" << divi(a, b) << endl; break;
		default:break;
		}
	}
	return 0;
}