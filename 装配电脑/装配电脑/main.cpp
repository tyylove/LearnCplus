#include"Coputer.h"

int main() {
	/* ��̬ */
	//��1̨����
	cout << "===================" << endl;
	cout << "��һ̨����" << endl;
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
	cout << "�ڶ�̨����" << endl;
	cout << "===================" << endl;
	cout << endl;

	//��2̨����
	Computer* pc = new Computer(new IntelCPU, new AmdGraphicsCard, new SumsungMemory);
	pc->run();
	delete pc;

	cout << endl;
	cout << "===================" << endl;
	cout << "����̨����" << endl;
	cout << "===================" << endl;
	cout << endl;

	//����̨����
	CPU* Intel = new AmdCPU;
	GraphicsCard* NvidiaGc = new NvidiaGraphicsCard;
	Memory* Sumsung = new SumsungMemory;
	Computer* laptop = new Computer(Intel, NvidiaGc, Sumsung);
	laptop->run();
	delete laptop;

	return 0;
}