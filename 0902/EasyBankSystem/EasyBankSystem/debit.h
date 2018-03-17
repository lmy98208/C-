#ifndef HEADER_DEBIT
#define HEADER_DEBIT
#include"account.h"
#include<iostream>
using namespace std;

class debit :public account
{
public:
	debit(string acntNo, string const&loca)
	{
		acntNumber = acntNo;
		location = loca;
	}
	void withdrawal(double amount,ATM a);
	~debit() {}
};
#endif
