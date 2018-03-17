#include<iostream>
using namespace std;

class CVector
{
private:
	int* pv;
	int sz, rsz;
	int flag;
public:
	CVector(int s1 = 0, int s2 = 0);//default constructor
	CVector(const CVector&);//copy constructor
	~CVector();             //destructor
	void set(int);
	void display();
	void transpose();     //ʵ��������ת��
	int size();           //��ȡ������Ԫ�ظ���
	int capacity();       //��ȡ�������������
	int dimension();      //��ȡ������ά��
	int module();         //����������ģ
	int& operator[](int); //�������±������ȡ������һ��Ԫ��
	friend CVector operator+(const CVector& v1, const CVector& v2);//��ͬά�ȵ��������
	friend CVector operator-(const CVector& v1, const CVector& v2);//��ͬά�ȵ��������
	friend int operator*(const CVector& v1, const CVector& v2);//��ͬά�ȵ������ڻ�
};