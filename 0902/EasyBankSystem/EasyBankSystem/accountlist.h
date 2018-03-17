#ifndef ACCOUNTLIST
#define ACCOUNTLIST
#include"account.h"
class Node
{
public :
	account& acnt;
	Node *next, *prev;
	Node(account& a) :acnt(a), next(0), prev(0)
	{}
	bool operator==(const Node& n)const
	{
		return acnt == n.acnt;
	}
};

class accountlist 
{
	int size;
	Node *first;
public:
	accountlist():first(0),size(0)
	{}
	Node* getFirst()const
	{
		return first;
	}
	int getSize()const
	{
		return size;
	}
	void add(account &a);
	account* find(string acntNo)const;
	bool isEmpty()const
	{
		return !size;
	}
	void display()const;
	~accountlist();
};
#endif
