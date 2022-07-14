#include<iostream>
#include<string>
using namespace std;
class Animals
{
public:
	Animals(double a, string b, int c)
	{
		m_weight = a;
		m_color = b;
		m_age = c;
	}
	double m_weight;
	string m_color;
	int m_age;
	void run()
	{
		cout << "跑起来了" << endl;
	}
	void eat()
	{
		cout << "吃饭" << endl;
	}
	void sleep()
	{
		cout << "睡觉" << endl;
	}
private:
	string m_name;
};

class Cat : public Animals
{
public:
	Cat(double a, string b, int c) :Animals(a, b, c)
	{
		m_weight = a;
		m_color = b;
		m_age = c;
	}
	void Capture()
	{
		cout << "抓老鼠" << endl;
	}
	void Call()
	{
		cout << "喵~~" << endl;
	}
	void show()
	{
		cout << "体重是：" << m_weight << endl;
		cout << "颜色是：" << m_color << endl;
		cout << "年龄是：" << m_age << endl;
		cout << "姓名是：";
		cin >> name;
		cout << "种类是：";
		cin >> kind;
	}
private:
	string name;
	string kind;
};

int main()
{
	Cat c(1.5,"黄色",1);
	c.show();
	c.Capture();
	c.eat();
	c.sleep();
	c.Call();
	c.run();
	return 0;
}
