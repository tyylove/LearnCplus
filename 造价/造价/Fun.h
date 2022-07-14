#pragma once
#include<iostream>
#define PI 3.14159

class Pool
{
public:
	void set_R();//设置游泳池半径
	void put_R();//输出半径
	void fence();//计算栅栏价格
	void aside();//计算过道价格
private:
	float R;
};