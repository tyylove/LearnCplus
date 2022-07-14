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
		cout << "发射子弹" << endl;
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
		cout << "发射一颗子弹" << endl;
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
		cout << "连续发射颗子弹" << endl;
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
		cout << "发射二营长的意大利炮" << endl;
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
		cout << "手雷扔出 鸡汤来咯" << endl;
	}
	void test()
	{
		Attack();
	}
private:

};
