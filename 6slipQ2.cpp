/*Write a C++ program to calculate maximum and minimum of two integer numbers of two 
different classes (Use friend function)*/

#include<iostream>
using namespace std;
class b1;
class a1
{
    public:
    int a;
    void accept()
    {
        cout<<"enter number 1:";
        cin>>a;
    }
    void max(a1 obj,b1 obj1);
    void min(a1 obj,b1 obj1);
};
class b1
{
    public:
    int b;
    void accept()
    {
        cout<<"enter number 1:";
        cin>>b;
    }
    void max(a1 obj,b1 obj1);
    void min(a1 obj,b1 obj1);
};
void max(a1 obj,b1 obj1)
{
    if(obj.a>obj1.b)
    {
        cout<<"max="<<obj.a;
    }
    else if(obj.a<obj1.b)
    {
        cout<<endl<<"max="<<obj1.b;
    }
}
void min(a1 obj,b1 obj1)
{
    if(obj.a<obj1.b)
    {
        cout<<endl<<"min="<<obj.a;
    }
    else if(obj.a>obj1.b)
    {
        cout<<endl<<"min="<<obj1.b;
    }
}
int main()
{
    a1 obj;
    b1 obj1;
    obj.accept();
    obj1.accept();
    max(obj,obj1);
     min(obj,obj1);
}
