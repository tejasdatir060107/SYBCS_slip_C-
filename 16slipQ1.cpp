/*Write a C++ program to calculate area and circumference of a Circle. (Use default 
argument, scope resolution operator and manipulator.)*/

#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double r) 
    {
      radius=r; 
    }
    double area(double pi=3.14);         
    double circumference(double pi=3.14); 
};

double Circle::area(double pi)
{
    return pi*radius*radius;
}

double Circle::circumference(double pi) 
{
    return 2*pi*radius;
}

int main() {
    double r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    Circle c(r);
    cout<<"Area of Circle ="<<c.area()<<endl;
    cout<<"Circumference of Circle = "<<c.circumference()<<endl;
    return 0;
}
