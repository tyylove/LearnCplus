#include<iostream>
#include<string>
using namespace std;


class Building
{
	// GoodBuilding �� Building �ĺ����ѣ����Է��� Building ��˽�г�Ա
	friend void GoodBuilding(Building& building); 

	// Goodfriend �� Building �ĺ����ѣ����Է��� Building ��˽�г�Ա 
 	friend class Goodfriend;
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
	
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

class Goodfriend
{
public:
	Building* building;
	Goodfriend()
	{
		building = new Building;
	}
	void vist()//�ι�Building�е� ����
	{
		cout << "�����������ڷ��ʣ�" << building->m_SittingRoom << endl;
		cout << "�����������ڷ��ʣ�" << building->m_BedRoom << endl;
	}
private:

};


void GoodBuilding(Building &building)
{
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building.m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building.m_BedRoom << endl;
}

void test()
{
	Building building;
	Goodfriend goodfriend;
	goodfriend.vist();
	GoodBuilding(building);
}
int main()
{
	test();
	return 0;
}