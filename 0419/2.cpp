#include<iostream>
#include"head.h"
using namespace std;
int main()
{
    ccomplex com1(1,2),com2;
    cout<<"com1: ";
    com1.show();
    cout<<"ǰ������";
    com2=++com1;
    com1.show();
    cout<<"com2 ";
    com2.show();
    cout<<"��������";
    com2=com1++;
    com1.show();
    cout<<"com2: ";
    com2.show();
    return 0;
}
