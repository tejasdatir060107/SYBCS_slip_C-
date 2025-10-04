//Write a C++ program to modify contents of an integer array. (Use Call by reference).  

#include<iostream>
using namespace std;

void modify(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=a[i]*a[i];
    }

}

int main()
{
    int a[20],n,i;
    cout<<"enter limit:";
    cin>>n;
    cout<<"enter element in array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"array before modify:";
    for(i=0;i<n;i++)
        cout<<a[i]<<"  ";

    modify(a,n);
    
    cout<<endl<<"array after modify:";
    for(i=0;i<n;i++)
        cout<<a[i]<<"  ";


}
