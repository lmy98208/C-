#include<iostream>
#include"head.h"
using namespace std;
int main()
{
	CVector v1, v2, temp;
	v1.set(20), v2.set(20);
	cout << "Original vector1:" << endl;
	v1.display();
	cout << "Original vector2:" << endl;
	v2.display();
	cout << "vector2 transpose:" << endl;
	v2.transpose();
	cout << "vector1 multiplies with vector2:" << endl;
	cout << v1*v2 << endl;
	cout << "vector1 add vector2:" << endl;
	temp = v1 + v2;
	temp.display();
	return 0;
}