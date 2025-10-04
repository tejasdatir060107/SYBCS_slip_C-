 /*Write a C++ program to define power function to calculate x^y. (Use default value  
as 2   for y).*/

#include<iostream>
using namespace std;


void power(int x,int y=2)
{
    int s=1;
    for(int i=1;i<=y;i++)
    {
        s=s*x;
    }
    cout<<"power of x="<<s;
}
int main()
{
    power(10);
}
