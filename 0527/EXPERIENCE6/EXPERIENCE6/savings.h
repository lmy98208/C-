#ifndef HEADER_SAVINGS
#define HEADER_SAVINGS
#include<string>
#include"account.h"
using std::string;

class Savings:public Account
{
public:
	Savings(string acntNo,double balan=0.0):
		Account(acntNo,balan)
	{}
	void display()const;
	void withdrawal(double amount);
};
#endif