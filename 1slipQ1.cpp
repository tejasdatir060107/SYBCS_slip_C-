/* Write a C++ program to calculate area and circumference of a Circle. (Use default 
argument, scope resolution operator and manipulator.)  */


#include<iostream>
using namespace std;
class circle
{
    public:
    
    void area_and_circum();

};
void circle::area_and_circum()
{
    float radius;
    cout<<"enter radius:";
    cin>>radius;
    float area=3.14*radius*radius;
    float circum=2*3.14*radius;
    cout<<"area of circle:"<<area<<endl;
    cout<<"circumference of circle:"<<circum;
}

int main()
{
    circle ob;
    ob.area_and_circum();
}
