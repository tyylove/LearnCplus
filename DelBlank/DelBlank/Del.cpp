#include <iostream>

#include <string>

#include <ctype.h>

using namespace std;

int main()
{
    string str_test;
    while (1) {
        /*下面两句清空缓冲区的*/
        cin.clear();
        cin.sync();

        cout << "请输入字符串：";

        getline(cin, str_test);

        for (auto iter = str_test.begin(); iter != str_test.end(); iter++) {

            if (isblank(*iter) != 0) {  	 //isblank判断是否为制表符或者空格，是的话返回非零值 
                                         //需包含头文件<ctype.h>

                str_test.erase(iter--); // --是因为重新判断一下填过来的字符

            }

        }
        cout << "删除后的字符串为：";
        cout << str_test << endl;
    }

    return 0;
}

