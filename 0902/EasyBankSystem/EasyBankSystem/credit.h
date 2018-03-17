#ifndef HEADER_CREDIT
#define HEADER_CREDIT
#include<iostream>
#include"account.h"
using namespace std;

class credit :public account
{
protected:
	double maxLoan;
	double interest;
public:
	credit(string acntNo, string &loca, double loan = -5000, double r = 0.001);
	void withdrawalPOS(double amount);
	void withdrawalATM(double amount,ATM a);
	void setLoan(double m) { maxLoan = m; }
	void setinterest(double i) { interest = i; }
	~credit() {}
};
#endif
