#include<iostream>
#include"account.h"

account::account(string acntNo,string const&ad, double balan,double r) :acntNumber(acntNo), 
location(ad),balance(balan),rate(r)
{}


void account::display()const
{
	std::cout << "Account:" + acntNumber + "=" << balance << "\n";
}

