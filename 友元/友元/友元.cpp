#include<iostream>
#include<string>
using namespace std;


class Building
{
	// GoodBuilding 是 Building 的好朋友，可以访问 Building 的私有成员
	friend void GoodBuilding(Building& building); 

	// Goodfriend 是 Building 的好朋友，可以访问 Building 的私有成员 
 	friend class Goodfriend;
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
	
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

class Goodfriend
{
public:
	Building* building;
	Goodfriend()
	{
		building = new Building;
	}
	void vist()//参观Building中的 属性
	{
		cout << "好朋友类正在访问：" << building->m_SittingRoom << endl;
		cout << "好朋友类正在访问：" << building->m_BedRoom << endl;
	}
private:

};


void GoodBuilding(Building &building)
{
	cout << "好基友全局函数 正在访问：" << building.m_SittingRoom << endl;
	cout << "好基友全局函数 正在访问：" << building.m_BedRoom << endl;
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