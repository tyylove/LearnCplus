#pragma once
#include <iostream>
using namespace std;

//CPU的抽象基类
class CPU {
public:
	//计算
	virtual void calculate() = 0;
};

//显卡的抽象基类
class GraphicsCard {
public:
	//显示
	virtual void display() = 0;
};

//内存的抽象基类
class Memory {
public:
	//存储
	virtual void store() = 0;
};

//电脑类
class Computer {
public:
	//构造函数
	Computer(CPU* c, GraphicsCard* g, Memory* m);

	//成员函数
	void run();
	//析构函数
	~Computer();
private:
	CPU* cpu;
	GraphicsCard* gc;
	Memory* mem;
};

//CPU厂商
class IntelCPU : public CPU {
public:
	void calculate();
};

class AmdCPU : public CPU {
public:
	void calculate();
};

//显卡厂商
class NvidiaGraphicsCard : public GraphicsCard {
public:
	void display();
};

class AmdGraphicsCard : public GraphicsCard {
public:
	void display();
};

//内存厂商
class SumsungMemory : public Memory {
public:
	void store();
};

class WesternDigitalMemory : public Memory {
public:
	void store();
};
