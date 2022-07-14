#include"Coputer.h"
#include<iostream>
Computer::Computer(CPU* c, GraphicsCard* g, Memory* m) {
	cout << "Computer��Ĺ��캯��" << endl;

	cpu = c;
	gc = g;
	mem = m;
}

void Computer::run() {
	cpu->calculate();
	gc->display();
	mem->store();
}

Computer::~Computer() {
	cout << "Computer�����������" << endl;
	//�ͷŲ�ͬ�����Ķ���ָ��
	if (cpu != NULL) {
		delete cpu;
		cpu = NULL;
	}

	if (gc != NULL) {
		delete gc;
		gc = NULL;
	}

	if (mem != NULL) {
		delete mem;
		mem = NULL;
	}
}

void IntelCPU::calculate() {
	cout <<"CPU�ǣ�Intel,YES!" << endl;
}

void AmdCPU::calculate() {
	cout << "CPU�ǣ�Amd, YES!" << endl;
}

void NvidiaGraphicsCard::display() {
	cout << "�Կ��ǣ�3090YYDS" << endl;
}

void AmdGraphicsCard::display() {
	cout << "�Կ��ǣ�6900��һ��ɧ" << endl;
}

void SumsungMemory::store() {
	cout << "�ڴ��ǣ����ǵ���" << endl;
}

void WesternDigitalMemory::store() {
	cout << "�ڴ��ǣ����ڻ�ǿ��" << endl;
}