/*create a base class Shape. Derive three different classes Circle, Rectangle and Triangle 
from Shape class. Write a C++ program to calculate area of Circle, Rectangle and Triangle. 
(Use pure virtual function).   */

#include<iostream>
using namespace std;

class shape
{
    public:
    float a;

    virtual void area()=0;
};
class circle:public shape
{
    public:
    float r;
        void area()
        {
            cout<<"enter radius:";
            cin>>r;
            a=3.14*r*r;
            cout<<"area of circle:"<<a<<endl;
        }
};
class rectangle:public shape
{
    public:
     float l,b;

     void area()
     {
        cout<<"enter lenght and breadth:";
        cin>>l>>b;
        a=l*b;
        cout<<"area of rectangle:"<<a<<endl;
     }
};
class triangle:public shape
{
    public:
     float h,b;

     void area()
     {
        cout<<"enter height and base:";
        cin>>h>>b;
        a=0.5*h*b;
        cout<<"area of triangle:"<<a<<endl;
     }
};

int main()
{
    circle ob;
    rectangle ob1;
    triangle ob2;
    ob.area();
    ob1.area();
    ob2.area();
}

