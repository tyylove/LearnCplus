#include"Coputer.h"

int main() {
	/* 多态 */
	//第1台电脑
	cout << "===================" << endl;
	cout << "第一台电脑" << endl;
	cout << "===================" << endl;
	cout << endl;
	CPU* amdCpu = new AmdCPU;
	GraphicsCard* nvidiaGc = new NvidiaGraphicsCard;
	Memory* wdMem = new WesternDigitalMemory;

	Computer* computer = new Computer(amdCpu, nvidiaGc, wdMem);
	computer->run();
	delete computer;

	cout << endl;
	cout << "===================" << endl;
	cout << "第二台电脑" << endl;
	cout << "===================" << endl;
	cout << endl;

	//第2台电脑
	Computer* pc = new Computer(new IntelCPU, new AmdGraphicsCard, new SumsungMemory);
	pc->run();
	delete pc;

	cout << endl;
	cout << "===================" << endl;
	cout << "第三台电脑" << endl;
	cout << "===================" << endl;
	cout << endl;

	//第三台电脑
	CPU* Intel = new AmdCPU;
	GraphicsCard* NvidiaGc = new NvidiaGraphicsCard;
	Memory* Sumsung = new SumsungMemory;
	Computer* laptop = new Computer(Intel, NvidiaGc, Sumsung);
	laptop->run();
	delete laptop;

	return 0;
}