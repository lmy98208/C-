/*This is a c++ homework author@19160209*/
#include<iostream>
#include<stdio.h>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<string>
#include<sstream>
using namespace std;
class info
{
    public:
    string han;
    string eng;
    info*next;
};


void menus(info *head);
void print(int a,info* p);
void freep(info *head);
void order(int pt,info*head);
void choose_to_do(info *head);
info* findword(string tmp,int a,info *head);


void freep(info* head)
{
    info*p=head,*q=NULL;
    do
    {
        q=p->next;
        delete p;
        p=q;
    }while(p!=NULL);
}
void print(int a,info *p)
{
    if(a==1||a==3) cout<<p->eng<<' ';
    else cout<<p->han<<' ';
}

info* findword(string tmp,int a,info *head)
{
    info *p;p=head;
    if(a==1||a==3){
       while(p!=NULL){
           if(p->han==tmp) return p;
           p=p->next;
        }
    }
    else {
        while(p!=NULL){
            if(p->eng==tmp) return p;
            p=p->next;
        }
    }
    return NULL;
}
void menus(info *head)
{
    int pt;
    cout<<"FUNCTIONS:Please input your requirement."<<endl;
    cout<<setw(10)<<1<<":(word) CHN---ENG"<<endl;
    cout<<setw(10)<<2<<":(word) ENG---CHN"<<endl;
    cout<<setw(10)<<3<<":(sentence) CHN---ENG"<<endl;
    cout<<setw(10)<<4<<":(sentence) ENG---CHN"<<endl;
    cin>>pt;
    order(pt,head);
}

void order(int pt,info*head)
{
    info*result;
    switch(pt)
    {
        case 1:{
            string tmp;
            int c=1;
            do{
                    cin>>tmp;
                    getche(c);
                    result=findword(tmp,pt,head);
                    if(result!=NULL) print(pt,result);
                    else cout<<"CAN'T FIND!"<<endl;
                    }while(c!='\n');
            break;
        }
        case 2:{
            string tmp;
            cin>>tmp;
            result=findword(tmp,pt,head);
            if(result!=NULL) print(pt,result);
            else cout<<"CAN'T FIND"<<endl;
            break;
        }
        case 3:{
            int k;string tmp;
            cout<<"请您输入句子中包含的词汇个数。"<<endl;
            cin>>k;
            cout<<"请您输入句子（词汇以空格分开）。"<<endl;
            for(int j=0;j<k;j++)
            {
                cin>>tmp;
                result=findword(tmp,pt,head);
                if(result!=NULL) cout<<result->eng<<" ";
                else cout<<"***"<<" ";
            }
            cout<<endl;
            break;
        }
        default:{
            int k;
            cout<<"Please input the NUMBER of words contained in a sentence."<<endl;
            cin>>k;string tmp;
            cout<<"Please input your sentence."<<endl;
            for(int j=0;j<k;j++)
            {
                cin>>tmp;
                result=findword(tmp,pt,head);
                if(result!=NULL) cout<<result->han;
                else cout<<"***"<<endl;
            }cout<<endl;
            break;
        }
    }
}
void choose_to_do(info *head)
{
    int q=1;
    while (q==1)
    {
        cout<<"DO you want to continue? Yes input '1'/No input '0'."<<endl;
        cin>>q;
        if (q!=0&&q!=1) {cout<<"Wrong order!"<<endl;
                           q=1;}
            else if(q==1) {
                menus(head);choose_to_do(head);
            }
            if(q==0) q=0;
    }
}

int main()
{
    cout<<"Welcome to the easy dictionary."<<endl;
    ifstream fin("data.txt");
    if(!fin)
    {
        cout<<"ERROR!"<<endl;
        exit(0);
    }
    //cout<<"1"<<endl;
    string s,str1,str2;
    info *head;
    head=new info;
    info *p;p=head;
    while(getline(fin,s))
    {
        istringstream sin(s);
        sin>>str1>>str2;
        info *newp;newp=new info;
        newp->han=str1;
        newp->eng=str2;
        cout<<newp->han<<" "<<newp->eng<<endl;
        p->next=newp;
        p=newp;
    }
    p->next=NULL;
    head=head->next;
    //cout<<"2"<<endl;
    menus(head);
    choose_to_do(head);

    freep(head);

    return 0;
}
