#include<iostream>
#include<stdio.h>
#include<stack>

using namespace std;
stack<int> s;
int main() 
{
	int val;
	cout << "请输入十进制数:";
	cin >> val;
	while (1) {
		if (val / 2 == 0) {
			s.push(val % 2);
			break;
		}
		s.push(val % 2);
		val /= 2;
	}
	cout << "转换后的二进制数为:";
	while (s.empty() != true) {
		printf("%d", s.top());
		s.pop();
	}
	return 0;
}