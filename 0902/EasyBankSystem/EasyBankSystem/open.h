#ifndef HEADER_OPEN
#define HEADER_OPEN
#include<fstream>
#include<iostream>
#include<sstream>
#include"accountlist.h"
using namespace std;
void open()
{
	ifstream in("data.txt");
	if (!in)
	{
		cout << "Can't open the file!" << endl;
		exit(0);
	}
	string str;
	int count = 0;
	string str_arry[100];
	while (getline(in, str))
	{
		istringstream sin(str);
		while (sin >> str_arry[count])
		{
			count++;
			if (count == 3) break;
		}//将文件中的数据写入数组
		double bal;
		str_arry[2].Format()
		account a(str_arry[0], str_arry[1], str_arry[2]);
	}
}
#endif
