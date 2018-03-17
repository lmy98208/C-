#ifndef HEADER_ACCOUNT
#define HEADER_ACCOUNT
#include<string>
using std::string;
class Account
{
protected:
	string acntNumber;
	double balance;
public:
	Account(string acntNO, double balan = 0.0);
		virtual void display()const;
	double getBalan()const
	{
		return balance;
	}
	void deposit(double amount)
	{
		balance += amount;
	}
	bool operator==(const Account & a)
	{
		return acntNumber == a.acntNumber;
	}
	string getAcntNo()
	{
		return acntNumber;
	}
	virtual void withdrawal(double amount) = 0;
};

#endif                        //HEADER_ACCOUNT