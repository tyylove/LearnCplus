#include <iostream>

#include <string>

#include <ctype.h>

using namespace std;

int main()
{
    string str_test;
    while (1) {
        /*����������ջ�������*/
        cin.clear();
        cin.sync();

        cout << "�������ַ�����";

        getline(cin, str_test);

        for (auto iter = str_test.begin(); iter != str_test.end(); iter++) {

            if (isblank(*iter) != 0) {  	 //isblank�ж��Ƿ�Ϊ�Ʊ�����߿ո��ǵĻ����ط���ֵ 
                                         //�����ͷ�ļ�<ctype.h>

                str_test.erase(iter--); // --����Ϊ�����ж�һ����������ַ�

            }

        }
        cout << "ɾ������ַ���Ϊ��";
        cout << str_test << endl;
    }

    return 0;
}

