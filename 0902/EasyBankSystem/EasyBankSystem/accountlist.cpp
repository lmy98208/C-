#include<iostream>
#include"accountlist.h"
using namespace std;

void accountlist::add(account &a)
{
	Node *p = new Node(a);
	if (first)
	{
		p->next = first;
		first->prev = p;
	}
	first = p;
	size++;
}

account* accountlist::find(string acntNo)const
{
	for (Node*p = first; p; p = p->next)
		if ((p->acnt).getAcntNo() == acntNo)
			return &(p->acnt);
	return 0;
}

void accountlist::display()const
{
	std::cout << "There are " << size << " accounts.\n";
	for (Node* p = first; p; p->next)
		(p->acnt).display();
}

accountlist::~accountlist()
{
	for (Node*p = first; p = first; delete p)
		first = first->next;
}