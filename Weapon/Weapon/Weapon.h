#pragma once
#include<iostream>
using namespace std;
class Weapon
{
public:
	void virtual Attack() = 0;
	void virtual test()
	{
		Attack();
	}
private:

};

class Gun:public Weapon
{
public:
	void virtual Attack()
	{
		cout << "�����ӵ�" << endl;
	}
	void virtual test()
	{
		Attack();
	}
private:

};

class HandGun:public Gun
{
public:
	void Attack()
	{
		cout << "����һ���ӵ�" << endl;
	}
	void test()
	{
		Attack();
	}
private:

};

class SniperGun :public Gun 
{
public:
	void Attack()
	{
		cout << "����������ӵ�" << endl;
	}
	void test()
	{
		Attack();
	}
private:

};
class Cannon:public Weapon
{
public:
	void Attack()
	{
		cout << "�����Ӫ�����������" << endl;
	}
	void test()
	{
		Attack();
	}
private:

};

class Antigrenade:public Weapon
{
public:
	void Attack()
	{
		cout << "�����ӳ� ��������" << endl;
	}
	void test()
	{
		Attack();
	}
private:

};
