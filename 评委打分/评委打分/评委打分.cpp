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
	string m_Name;//姓名
	int m_Score;//平均分

private:

};

void CreatPerson(vector<Person>&v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//将创建的对象Person对象放入容器类
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
			int score = rand() % 41 + 60;//分数范围60到100
			d.push_back(score);
		}
		cout << "选手：" << it->m_Name << " " << "打分：" <<endl;
		cout << "初始得分" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		
		//排序
		sort(d.begin(), d.end());

		int sum = 0;

		//去除最高分和最低分
		d.pop_back();
		d.pop_front();

		cout << "最后得分" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
			cout << *dit << " ";
		}
		cout << endl;

		
		//计算平均分
		int avg = sum / d.size();

		//将平均分赋值给选手
		it->m_Score = avg;
	}
}

void Showscore(vector<Person>&v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_Name << " " << "平均分：" << it->m_Score << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Person>v;//存放选手的容器
	CreatPerson(v);
	Setscore(v);
	Showscore(v);
}