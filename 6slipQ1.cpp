/**Write a C++ program to create a class ‘MyArray’ which contains single dimensional 
integer array of given size. Write a member function to display even and odd numbers 
from a given array. (Use Dynamic Constructor to allocate and Destructor to free memory 
of an object).*/

#include<iostream>
using namespace std;

class myarray
{
    public:
    int *a,n;
    myarray()
    {
        cout<<"enter limit:";
        cin>>n;
        a=new int[n];

        cout<<"enter element in array:";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void disp()
    {
        cout<<"even number:";
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
             {
                cout<<a[i]<<"  ";
             }
        }
        cout<<endl<<"odd number :";
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
             {
                cout<<a[i]<<"  ";
             }
        }
    }
    ~myarray()
    {
        delete [] a;
        cout<<endl<<"memory free...";
    }
};
int main()
{
    myarray obj;
    obj.disp();

}
