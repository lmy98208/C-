#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

class ccomplex
{
private:
    int m_mun,m_son;
public:
    ccomplex(int=0, int =0);
    void set_mun(int);
    void set_son(int);
    void show()const;
    friend ccomplex& operator++(ccomplex&);
    friend ccomplex& operator++(ccomplex&,int);
};

#endif // HEAD_H_INCLUDED
