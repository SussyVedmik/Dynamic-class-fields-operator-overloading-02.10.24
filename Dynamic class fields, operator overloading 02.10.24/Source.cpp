#include "MyString.h"
#include <iostream>
using namespace std;

int main() {
    MyString str1("Ich");
    MyString str2("bin");
    str1.Output();
    str2.Output();
    MyString str3 = str1 + str2;
    str3.Output();
    MyString str4;
    str4.MyStrcpy(str1);
    str4.Output();
    int cmp = str1.MyStrCmp(str2);
    cout << "��������� ���������: " << cmp << endl;
    int index = str1.MyChr('e');
    cout << "������ ������� 'e': " << index << endl;
    str1.MyDelChr('h');
    str1.Output();
    str4.Input();
    str4.Output();
    cout << "���������� ��������: " << MyString::getObjectCount() << endl;

    return 0;
}