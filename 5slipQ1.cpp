/*Write a C++ program to create two classes Array1 and Array2 with an integer array as a 
data member. Write necessary member functions to accept and display array elements of 
both the classes. Find and display maximum of both the array. (Use Friend function). */

#include<iostream>
using namespace std;
class array2;
class array1
{
    public:
    int a1[100], n;
    void accept()
    {
        cout<<"enter limit";
        cin>>n;
        cout<<"enter elemnt array 1:";
        for(int i=0;i<n;i++)
            cin>>a1[i];      
    }
    void disp()
    {
        cout<<"array1:";
        for(int i=0;i<n;i++)
        {
            cout<<a1[i]<<"  ";
        }
        cout<<endl;
    }
   friend void disp(array1 obj,array2 obj1);
};
class array2
{
    public:
    int a2[100], n;
    void accept()
    {
        cout<<"enter limit";
        cin>>n;
        cout<<"enter elemnt array 2:";
        for(int i=0;i<n;i++)
            cin>>a2[i];      
    }
    void disp()
    {
        cout<<"array1:";
        for(int i=0;i<n;i++)
        {
            cout<<"  "<<a2[i];
        }
        cout<<endl;
    }
    friend void disp(array1 obj,array2 obj1);
};
 void disp(array1 obj,array2 obj1)
{
    int max1=obj.a1[0];
    int max2=obj1.a2[0];

    for(int i=0;i<obj.n;i++)
    {
        if(obj.a1[i]>max1)
        {
            max1=obj.a1[i];
        }
    }
    for(int i=0;i<obj1.n;i++)
    {
        if(obj1.a2[i]>max2)
        {
            max2=obj1.a2[i];
        }
    }
    if(max1>max2)
    cout<<"maximum number of both array:"<<max1<<endl;
    else
    cout<<"maximum number of both array:"<<max2<<endl;

}
int main()
{
    array1 obj;
    array2 obj1;

    obj.accept();
    obj1.accept();
    obj.disp();
    obj1.disp();

     disp(obj,obj1);
}

