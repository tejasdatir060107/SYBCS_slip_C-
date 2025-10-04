/*Write a C++ program to accept ‘n’ float numbers, store them in an array and print the 
alternate elements of an array. (Use dynamic memory allocation)*/

#include<iostream>
using namespace std;

class array
{
    public:
    float *a;
    int n;
    void accept()
    {
        cout<<"enter limit:";
        cin>>n;
        a=new float[n];
        cout<<"enter n number in array:";
        for(int i=0;i<n;i++)
            cin>>a[i];
    }
    void display()
    {
        cout<<" alternative array:";
        for(int i=0;i<n;i=i+2)
        {
            cout<<a[i]<<"  ";
        }
        delete []a;
    }
};

int main()
{
    array ob;
    ob.accept();
    ob.display();

}
