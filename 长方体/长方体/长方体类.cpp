#include<iostream>
using namespace std;

class Cuboid
{
public:
	double getheight(){
		return m_height;
	}
	double getlength() {
		return m_length;
	}
	double getweight(){
		return m_weight;
	}
	void setheight(double height){
		m_height = height;
	}
	void setlength(double length){
		m_length = length;
	}
	void setweight(double weight) {
		m_weight = weight;
	}

	Cuboid(double length,double weight,double height ) {
		m_height = height;
		m_length = length;
		m_weight = weight;
	}
private:
	double m_height;
	double m_length;
	double m_weight;
};

void Compare(Cuboid& box1, Cuboid& box2)
{
	if (box1.getheight() == box2.getheight() && box1.getlength() == box2.getlength() && box1.getweight() == box2.getweight())
	{
		cout << "����������ͬ" << endl;
	}
	else
	{
		cout << "����������ͬ" << endl;
	}
}
 
int main()
{
	Cuboid box(1,2,3);
	Cuboid box1(1, 2, 3);
	Compare(box, box1);
	cout << "����" << box.getlength() <<" " << endl;
	cout << "��" << box.getweight() << " " << endl;
	cout << "�ߣ�" << box.getheight() << " " << endl;
}