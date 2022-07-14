#pragma once
#include <iostream>
using namespace std;

//CPU�ĳ������
class CPU {
public:
	//����
	virtual void calculate() = 0;
};

//�Կ��ĳ������
class GraphicsCard {
public:
	//��ʾ
	virtual void display() = 0;
};

//�ڴ�ĳ������
class Memory {
public:
	//�洢
	virtual void store() = 0;
};

//������
class Computer {
public:
	//���캯��
	Computer(CPU* c, GraphicsCard* g, Memory* m);

	//��Ա����
	void run();
	//��������
	~Computer();
private:
	CPU* cpu;
	GraphicsCard* gc;
	Memory* mem;
};

//CPU����
class IntelCPU : public CPU {
public:
	void calculate();
};

class AmdCPU : public CPU {
public:
	void calculate();
};

//�Կ�����
class NvidiaGraphicsCard : public GraphicsCard {
public:
	void display();
};

class AmdGraphicsCard : public GraphicsCard {
public:
	void display();
};

//�ڴ泧��
class SumsungMemory : public Memory {
public:
	void store();
};

class WesternDigitalMemory : public Memory {
public:
	void store();
};
