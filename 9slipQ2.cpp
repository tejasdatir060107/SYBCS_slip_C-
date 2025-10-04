//Write a C++ program to define power function to calculate x^y. (Use default value as 2 for y).

#include<iostream>
using namespace std;

void power(int x,int y=2)
{
    int p=1;
    for(int i=1;i<=y;i++)
    {
        p=x*y;
    }
    cout<<"power of :"<<p;
} 

int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    power(n);
}
