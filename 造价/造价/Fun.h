#pragma once
#include<iostream>
#define PI 3.14159

class Pool
{
public:
	void set_R();//������Ӿ�ذ뾶
	void put_R();//����뾶
	void fence();//����դ���۸�
	void aside();//��������۸�
private:
	float R;
};