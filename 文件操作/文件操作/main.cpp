#include<iostream>
#include<fstream>//文件的头文件
#include<string>
using namespace std;


void testWrite()
{
	//1、包含头文件 fstream
	//2、创建流对象

	ofstream File;

	//3、打开文件的方式
	File.open("test.txt", ios::out);

	//4、写内容
	File << "姓名：唐杨洋" << endl;
	File << "学号：631xxxxxxx23" << endl;
	File << "年龄：22" << endl;
	 
	//5、关闭文件
	File.close();
}

void testRead()
{
	//1、包含头文件 fstream

	//2、创建流对象 
	ifstream File;

	//3、打开文件，并且判断是否打开成功
	File.open("test.txt", ios::out);
	if (!File.is_open())
	{
		cout << "文件打开失败！！！" << endl;
		return;
	}
	//4、读数据
	/*
	//第一种方法
	char buf[1024] = { 0 };
		while (File >> buf)
		{
			cout << buf << endl;
		}
		//第二种方法
		char buf[1024] = { 0 };
		while (File.getline(buf，sizeof(buf)))
		{
			cout << buf << endl;
		}

		//第四种方法
	char c;
	while (c = File.get() != EOF)
	{
		cout << c;
	}

		*/
		
	//第三种方法
	string buf;
	while (getline(File,buf))
	{
		cout << buf << endl;
	}
	
	//5、关闭文件
	File.close();
}
int main()
{
	testWrite();
	testRead();
	return 0;
}
