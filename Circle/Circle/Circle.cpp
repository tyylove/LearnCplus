#include<iostream>
#define PI 3.14
using namespace std;
class Circle
{
public:
	void set_R() 
	{
		float r;
		cout << "ÇëÊäÈë°ë¾¶£º";
		cin >> r;
		R = r;
	}
	float get_R() 
	{
		return R;
	}
	float Calculate()
	{
		float C, S;
		C = 2 * PI * R;
		S = PI * R * R;
		return S;
	}
	float R;
private:
	
};

ostream& operator <<(ostream& cout, Circle C)
{
	cout << C.R << " " << C.Calculate() << endl;
	return cout;
}
int main()
{
	Circle C;
	C.set_R();
	C.get_R();
	cout << C;
}