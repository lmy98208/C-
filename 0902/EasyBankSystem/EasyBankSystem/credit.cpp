#include "credit.h"
#include"ATM.h"

credit::credit(string acntNo, string & ad, double loan, double r)
{
	acntNumber = acntNo;
	location = ad;
	maxLoan = loan;
	rate = r;
}

void credit::withdrawalPOS(double amount)
{
	if(balance-amount>=maxLoan)
		balance = balance - amount;
	else cout << "Credit limit exceeded.Transaction cancelled.\n";
}

void credit::withdrawalATM(double amount,ATM a)
{
	if (location == a.address) balance += amount;
	else balance = balance + amount - amount*rate;
}
