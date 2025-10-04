/*Design two base classes Personnel (name, address, email-id, birth date) and Academic 
(marks in tenth, marks in twelfth class obtained). Derive a class Bio-data from both these 
classes. Write a C++ program to prepare a bio-data of a student having Personnel and 
Academic information.   */

#include<iostream>
using namespace std;
class personnel
{
    public:
    int dd,mm,yy;
    char name[20],addr[20],email_id[20];

    void accept()
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter address:";
        cin>>addr;
        cout<<"enter email id";
        cin>>email_id;
        cout<<"enter birth date";
        cin>>dd>>mm>>yy;
    }
};
class academic
{
    public:
    int m10,m12;

    void accept2()
    {
        cout<<"enter 10 th class mark:";
        cin>>m10;
        cout<<"enter 12 th class mark:";
        cin>>m12;
    }
};
class biodata:public personnel,public academic
{
    public:

    void disp()
    {
        cout<<endl<<"pernonel information."<<endl;
        cout<<".........................................";
        cout<<endl<<"name:"<<name<<endl;
        cout<<"address:"<<addr<<endl;
        cout<<"email id:"<<email_id<<endl;
        cout<<"birth date:"<<dd<<"-"<<mm<<"-"<<yy<<endl;
        cout<<"academic information"<<endl;
        cout<<"..........................................."<<endl;
        cout<<"10th class mark:"<<m10<<endl;
        cout<<"12th class mark:"<<m12<<endl;
    }
};
int main()
{
    biodata ob;
    ob.accept();
    ob.accept2();
    ob.disp();
}
