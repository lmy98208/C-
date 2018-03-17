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
	void transpose();     //实现向量的转置
	int size();           //获取向量的元素个数
	int capacity();       //获取向量的最大容量
	int dimension();      //获取向量的维数
	int module();         //计算向量的模
	int& operator[](int); //向量的下标操作获取向量的一个元素
	friend CVector operator+(const CVector& v1, const CVector& v2);//相同维度的向量相加
	friend CVector operator-(const CVector& v1, const CVector& v2);//相同维度的向量相减
	friend int operator*(const CVector& v1, const CVector& v2);//相同维度的向量内积
};