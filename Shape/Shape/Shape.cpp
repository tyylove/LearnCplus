#include"Shape.h"
#include<iostream>
using namespace std;

int main()
{
	Shape* C = new Circle;
	Shape* Cy = new Cylinder;
	C->Set_r(5);
	C->Get_r();
	C->Area();
	C->PrintfResult();
	Cy->Set_r(5);
	Cy->Get_r();
	Cy->Set_h(5);
	Cy->Get_h();
	Cy->Area();
	Cy->PrintfResult();
	return 0;
}