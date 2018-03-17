//class CVector funtion
#include<iostream>
#include"head.h"
using namespace std;
CVector::CVector(int s1, int s2) :pv(0), sz(s1), rsz(s2)
{}
CVector::CVector(const CVector& v) //拷贝构造函数
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
	if (s <= 0)//容错处理
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
	flag = 1;//flag控制行列向量
}
void CVector::display()
{
	for (int i = 0; i < rsz; ++i)
	{
		if (flag)
			cout << *(pv + i) << " ";  //如果为行向量，则按行输出
		else
			cout << *(pv + i) << endl;//如果为列向量，则按列输出
	}

}
void CVector::transpose()
{
	if (flag)
		flag = 0;
	else
		flag = 1; //flag 的1和0分别代表行向量和列向量
}
inline int CVector::size()     //获取向量的元素个数
{
	return rsz;
}
inline int CVector::capacity() //获取向量的最大容量
{
	return sz;
}
inline int CVector::dimension()//获取向量的维度
{
	return rsz;
}
inline int CVector::module()   //计算向量的模
{
	return sizeof(int)*rsz;
}
CVector operator+(const CVector& v1, const CVector& v2)  //相同维数的向量相加
{
	CVector temp(v1.sz, v1.rsz);
	for (int i = 0; i < v1.rsz; ++i)
	{
		*(temp.pv + i) = *(v1.pv + i) + *(v2.pv + i);
	}
	return temp;
}
CVector operator-(const CVector& v1, const CVector& v2) //相同维数的向量相减
{
	CVector temp(v1.sz, v1.rsz);
	for (int i = 0; i < v1.rsz; ++i)
	{
		*(temp.pv + i) = *(v1.pv + i) - *(v2.pv + i);
	}
	return temp;
}
int operator*(const CVector& v1, const CVector& v2)   //行列向量相乘
{
	int temp = 0;
	for (int i = 0; i < v1.rsz; ++i)
	{
		temp += *(v1.pv + i)**(v2.pv + i);
	}
	return temp;
}
int& CVector::operator[](int index)                   //[]运算符重载
{
	if (index<0 || index>rsz)
	{
		cerr << "vector index out of range\n";
		exit(1);
	}
	return pv[index];
}