#include"���������.h"
#include<iostream>
using namespace std;
int main()
{
	Point p(1,2);
	cout << "��ʼ���ݣ�" << endl;
	p.show();
	cout << "ǰ��++�����ݣ�" << endl;
	p++;
	p.show();
	cout << "����++�����ݣ�" << endl;
	++p;
	p.show();
	return 0;
}