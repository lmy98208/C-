#include "debit.h"
#include"ATM.h"

void debit::withdrawal(double amount,ATM a)
{
	if (a.address == location) balance = balance - amount;
	else balance = balance - amount*(1 + rate);
}
