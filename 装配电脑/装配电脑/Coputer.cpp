#include"Coputer.h"
#include<iostream>
Computer::Computer(CPU* c, GraphicsCard* g, Memory* m) {
	cout << "Computer类的构造函数" << endl;

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
	cout << "Computer类的析构函数" << endl;
	//释放不同部件的堆区指针
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
	cout <<"CPU是：Intel,YES!" << endl;
}

void AmdCPU::calculate() {
	cout << "CPU是：Amd, YES!" << endl;
}

void NvidiaGraphicsCard::display() {
	cout << "显卡是：3090YYDS" << endl;
}

void AmdGraphicsCard::display() {
	cout << "显卡是：6900有一点骚" << endl;
}

void SumsungMemory::store() {
	cout << "内存是：三星电子" << endl;
}

void WesternDigitalMemory::store() {
	cout << "内存是：深圳华强北" << endl;
}