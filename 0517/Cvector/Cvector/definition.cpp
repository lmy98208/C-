//class CVector funtion
#include<iostream>
#include"head.h"
using namespace std;
CVector::CVector(int s1, int s2) :pv(0), sz(s1), rsz(s2)
{}
CVector::CVector(const CVector& v) //�������캯��
{
	sz = v.sz;
	rsz = v.rsz;
	pv = new int[sz];
	for (int i = 0; i < rsz; ++i)
	{
		*(pv + i) = *(v.pv + i);
	}
}
CVector::~CVector()
{
	delete[] pv;
}
void CVector::set(int s)
{
	sz = s;
	if (s <= 0)//�ݴ���
	{
		cerr << "bad vector size.\n";
		exit(1);
	}
	pv = new int[s];
	int i = 0;
	cout << "please input nums,the size no more than " << s << endl;
	while (cin >> *(pv + i))
	{
		++i;
	}
	rsz = i;
	flag = 1;//flag������������
}
void CVector::display()
{
	for (int i = 0; i < rsz; ++i)
	{
		if (flag)
			cout << *(pv + i) << " ";  //���Ϊ���������������
		else
			cout << *(pv + i) << endl;//���Ϊ���������������
	}

}
void CVector::transpose()
{
	if (flag)
		flag = 0;
	else
		flag = 1; //flag ��1��0�ֱ������������������
}
inline int CVector::size()     //��ȡ������Ԫ�ظ���
{
	return rsz;
}
inline int CVector::capacity() //��ȡ�������������
{
	return sz;
}
inline int CVector::dimension()//��ȡ������ά��
{
	return rsz;
}
inline int CVector::module()   //����������ģ
{
	return sizeof(int)*rsz;
}
CVector operator+(const CVector& v1, const CVector& v2)  //��ͬά�����������
{
	CVector temp(v1.sz, v1.rsz);
	for (int i = 0; i < v1.rsz; ++i)
	{
		*(temp.pv + i) = *(v1.pv + i) + *(v2.pv + i);
	}
	return temp;
}
CVector operator-(const CVector& v1, const CVector& v2) //��ͬά�����������
{
	CVector temp(v1.sz, v1.rsz);
	for (int i = 0; i < v1.rsz; ++i)
	{
		*(temp.pv + i) = *(v1.pv + i) - *(v2.pv + i);
	}
	return temp;
}
int operator*(const CVector& v1, const CVector& v2)   //�����������
{
	int temp = 0;
	for (int i = 0; i < v1.rsz; ++i)
	{
		temp += *(v1.pv + i)**(v2.pv + i);
	}
	return temp;
}
int& CVector::operator[](int index)                   //[]���������
{
	if (index<0 || index>rsz)
	{
		cerr << "vector index out of range\n";
		exit(1);
	}
	return pv[index];
}