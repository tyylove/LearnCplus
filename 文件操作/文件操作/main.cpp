#include<iostream>
#include<fstream>//�ļ���ͷ�ļ�
#include<string>
using namespace std;


void testWrite()
{
	//1������ͷ�ļ� fstream
	//2������������

	ofstream File;

	//3�����ļ��ķ�ʽ
	File.open("test.txt", ios::out);

	//4��д����
	File << "������������" << endl;
	File << "ѧ�ţ�631xxxxxxx23" << endl;
	File << "���䣺22" << endl;
	 
	//5���ر��ļ�
	File.close();
}

void testRead()
{
	//1������ͷ�ļ� fstream

	//2������������ 
	ifstream File;

	//3�����ļ��������ж��Ƿ�򿪳ɹ�
	File.open("test.txt", ios::out);
	if (!File.is_open())
	{
		cout << "�ļ���ʧ�ܣ�����" << endl;
		return;
	}
	//4��������
	/*
	//��һ�ַ���
	char buf[1024] = { 0 };
		while (File >> buf)
		{
			cout << buf << endl;
		}
		//�ڶ��ַ���
		char buf[1024] = { 0 };
		while (File.getline(buf��sizeof(buf)))
		{
			cout << buf << endl;
		}

		//�����ַ���
	char c;
	while (c = File.get() != EOF)
	{
		cout << c;
	}

		*/
		
	//�����ַ���
	string buf;
	while (getline(File,buf))
	{
		cout << buf << endl;
	}
	
	//5���ر��ļ�
	File.close();
}
int main()
{
	testWrite();
	testRead();
	return 0;
}
