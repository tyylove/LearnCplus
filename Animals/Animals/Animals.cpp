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
		cout << "��������" << endl;
	}
	void eat()
	{
		cout << "�Է�" << endl;
	}
	void sleep()
	{
		cout << "˯��" << endl;
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
		cout << "ץ����" << endl;
	}
	void Call()
	{
		cout << "��~~" << endl;
	}
	void show()
	{
		cout << "�����ǣ�" << m_weight << endl;
		cout << "��ɫ�ǣ�" << m_color << endl;
		cout << "�����ǣ�" << m_age << endl;
		cout << "�����ǣ�";
		cin >> name;
		cout << "�����ǣ�";
		cin >> kind;
	}
private:
	string name;
	string kind;
};

int main()
{
	Cat c(1.5,"��ɫ",1);
	c.show();
	c.Capture();
	c.eat();
	c.sleep();
	c.Call();
	c.run();
	return 0;
}
