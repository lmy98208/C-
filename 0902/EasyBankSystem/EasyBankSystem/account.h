#ifndef HEADER_ACCOUNT
#define HEADER_ACCOUNT
#include<string>
using std::string;
class account
{
protected:
	string location;
	string acntNumber;
	double balance;
	double rate;   //������
public:
	account(string acntNO=0000000, string const &ad="Nanjing",double balan = 0.0,double rate=0.001);
	virtual void display()const;
	void setrate(double r) { rate = r; }
	double getBalan()const
	{
		return balance;
	}
	virtual void deposit(double amount)
	{
		if (amount < 0)                                   //�ж��������Ƿ������ �Ƿ���Ч
			std::cout << "Negative deposit not allowed;"
			<< "depoist is cancelled.";
		else balance += amount;
	}
	bool operator==(const account & a)
	{
		return acntNumber == a.acntNumber;
	}
	string getAcntNo()
	{
		return acntNumber;
	}
	string getLoca()
	{
		return location;

	}
};

#endif                        //HEADER_ACCOUNT
