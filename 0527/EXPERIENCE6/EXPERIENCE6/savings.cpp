#include<iostream>
#include"savings.h"
void Savings::display()const
{
	std::cout << "Savings";
	Account::display();
}
void Savings::withdrawal(double amount)
{
	if (balance < amount)
		std::cout << "Insfficient funds withdrawal:" 
		<< amount << "\n";
	else balance -= amount;
}