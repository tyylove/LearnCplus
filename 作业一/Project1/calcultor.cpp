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
		cout << "���������ѡ��:";
		cin >> choice;
		system("cls");
		cout << "������������:";
		cin >> a >> b;
		switch (choice) {
		case 1:cout <<"��ӵĽ���ǣ�" << add(a, b) << endl; break;
		case 2:cout <<"����Ľ���ǣ�" << sub(a, b) << endl;  break;
		case 3:cout <<"��˵Ľ���ǣ�" << mul(a, b) << endl; break;
		case 4:cout <<"����Ľ���ǣ�" << divi(a, b) << endl; break;
		default:break;
		}
	}
	return 0;
}