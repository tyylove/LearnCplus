#include<iostream>
#include<stdio.h>
#include<stack>

using namespace std;
stack<int> s;
int main() 
{
	int val;
	cout << "������ʮ������:";
	cin >> val;
	while (1) {
		if (val / 2 == 0) {
			s.push(val % 2);
			break;
		}
		s.push(val % 2);
		val /= 2;
	}
	cout << "ת����Ķ�������Ϊ:";
	while (s.empty() != true) {
		printf("%d", s.top());
		s.pop();
	}
	return 0;
}