#include "menus.h"
#include"accountlist.h"
#include<iostream>
using namespace std;

void menus(account * first)
{
	int p;
	cout << "1.Open a debit card." << '\n'
		<< "2.Open a credit card" << '\n'
		<< "3.ATM--deposit" << '\n'   //��Ǯ
		<< "4.ATM--withdraw" << '\n'  //ȡǮ
		<< "5.POS" << endl;           //ˢ����
	cin >> p;
}
