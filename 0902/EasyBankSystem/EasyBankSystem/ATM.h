#ifndef HEADER_ATM
#define HEADER_ATM

#include<string>
class ATM
{
public :
	std::string address;
	ATM(const std::string &addr = "Nanjing");
	~ATM() {}
};
#endif