#include<string>
#include<iostream>
using namespace std;
class CAdministrator
{
public:
	void display();
	CAdministrator(string nam,string s,string p,string ad,string t);
protected:
	string post; string name; string sex; string address; string tel;
};
CAdministrator::CAdministrator(string nam, string s, string p, string ad, string t)
	:name(nam), sex(s), post(p), address(ad), tel(t)
{}
void CAdministrator::display()
{
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
	cout << "post:" << post << endl;
	cout << "address:" << address << endl;
	cout << "tel:" << address << endl;
}
class CTeacher
{
public:
	CTeacher(string nam, string s, string tit, string ad, string t);
	void display();
protected:
	string name; string sex; string title; string address; string tel;
};

CTeacher::CTeacher(string nam,string s,string tit,string ad,string t)
	:name(nam),sex(s),title(tit),address(ad),tel(t)
{}
void CTeacher::display()
{
	cout << "������" << name << endl;
	cout << "�Ա�" << sex << endl;
	cout << "ְ�ƣ�" << title << endl;
	cout << "��ַ��" << tel << endl;
}

class CTeacher_Administrator:public CTeacher,public CAdministrator
{
public:
	void show();
	CTeacher_Administrator(string nam, string s, string t, string p, string ad, string tel, float w);
protected:
	float wage;
};
CTeacher_Administrator::CTeacher_Administrator(string nam,string s,string t, string p,string ad,string tel,float w)
	:CTeacher(nam,s,t,ad,tel),CAdministrator(nam,s,p,ad,tel),wage(w)
{}
void CTeacher_Administrator::show()
{
	CTeacher::display();
	cout << "ְ��" << CAdministrator::post << endl;
	cout << "���ʣ�" << wage << endl;
}

int main()
{
	CTeacher_Administrator a("��Ӣ", "��", "�߼�", "��ʦ", "����·122�ż��������", "138,0000,0000", 5000);
	a.show();
	system("pause");
	return 0;
}