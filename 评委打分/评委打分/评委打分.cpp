#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>

using namespace std;
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;//����
	int m_Score;//ƽ����

private:

};

void CreatPerson(vector<Person>&v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//�������Ķ���Person�������������
		v.push_back(p);
	}
}

void Setscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//������Χ60��100
			d.push_back(score);
		}
		cout << "ѡ�֣�" << it->m_Name << " " << "��֣�" <<endl;
		cout << "��ʼ�÷�" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		
		//����
		sort(d.begin(), d.end());

		int sum = 0;

		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		cout << "���÷�" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
			cout << *dit << " ";
		}
		cout << endl;

		
		//����ƽ����
		int avg = sum / d.size();

		//��ƽ���ָ�ֵ��ѡ��
		it->m_Score = avg;
	}
}

void Showscore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_Name << " " << "ƽ���֣�" << it->m_Score << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Person>v;//���ѡ�ֵ�����
	CreatPerson(v);
	Setscore(v);
	Showscore(v);
}