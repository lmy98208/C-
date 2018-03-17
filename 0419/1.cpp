#include<iostream>
#include"head.h"
using namespace std;

ccomplex::ccomplex(int son,int mun)
{
    m_son=son;
    m_mun=mun;
}
inline void ccomplex::set_son(int son)
{
    m_son=son;
}
inline void ccomplex::set_mun(int mun)
{
    m_mun=mun;
}
void ccomplex ::show()const
{
    cout<<m_son<<'/'<<m_mun<<endl;
}

ccomplex &operator++(ccomplex &cobj)
{
    ++cobj.m_son;
    return cobj;
}

ccomplex &operator++(ccomplex& cobj,int)
{
    ccomplex &temp(cobj);
    ++cobj.m_son;
    return temp;
}
