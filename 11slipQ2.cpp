/*Write a C++ program to accept length and width of a rectangle. Calculate and display 
perimeter as well as area of a rectangle by using Inline function.  */

#include<iostream>
using namespace std;

inline float area(int l,int b)
{
    return l*b;
}
inline float perimeter(int l,int b)
{
    return 2*(l+b);
}
int main()
{
    float l,b;
    cout<<"enter length and breadth:";
    cin>>l>>b;
   cout<<"area:"<<area(l,b)<<endl;
    cout<<"perimeter:"<<perimeter(l,b);
}
