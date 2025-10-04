/*Write a C++ program to create a class MyDate with three data members as dd, mm, yyyy. 
Create and initialize the object by using parameterized constructor and display date in dd- 
mon-yyyy format. (Input: 19-12-2014 Output: 19-Dec-2014). (Use the concept of dynamic 
initialization   of object). */

#include<iostream>
using namespace std;
class mydate
{
    public:
    int d,m,y;
        mydate(int day,int mon,int year)
        {
            d=day;
            m=mon;
            y=year;
        }
        void disp()
        {
            switch(m)
            {
                case 1:cout<<d<<"-"<<"jan"<<"-"<<y<<endl; break;
                case 2:cout<<d<<"-"<<"feb"<<"-"<<y<<endl; break;
                case 3:cout<<d<<"-"<<"mar"<<"-"<<y<<endl; break;
                case 4:cout<<d<<"-"<<"apr"<<"-"<<y<<endl; break;
                case 5:cout<<d<<"-"<<"may"<<"-"<<y<<endl; break;
                case 6:cout<<d<<"-"<<"june"<<"-"<<y<<endl; break;
                case 7:cout<<d<<"-"<<"july"<<"-"<<y<<endl; break;
                case 8:cout<<d<<"-"<<"aug"<<"-"<<y<<endl; break;
                case 9:cout<<d<<"-"<<"sep"<<"-"<<y<<endl; break;
                case 10:cout<<d<<"-"<<"oct"<<"-"<<y<<endl; break;
                case 11:cout<<d<<"-"<<"nov"<<"-"<<y<<endl; break;
                case 12:cout<<d<<"-"<<"dec"<<"-"<<y<<endl; break;
                 default:cout<<"invalid month...."; break;
            }
        }
};
int main()
{
    int dd,mm,yy;
    cout<<"enter date in dd mm yyyy formate:";
    cin>>dd>>mm>>yy;

    mydate *ob=new mydate(dd,mm,yy);
    ob->disp();
}

