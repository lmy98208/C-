#ifndef HEADER_POS
#define HEADER_POS
#include<string>
using std::string;
class POS
{
public:
	string address_;
	POS(const string &ad = "Nanjing");
	~POS() {}
};
#endif
