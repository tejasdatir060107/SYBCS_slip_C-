/*Write a C++program to calculate following series:  
(1*1) +(2*2) +(3*3) + … +(n*n).        */

#include<iostream>
using namespace std;

void series(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i*i<<" +";
    }
    cout<<"\b ";
}
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    series(n);
}
