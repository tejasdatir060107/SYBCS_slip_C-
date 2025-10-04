/*Write a C++ program to create a class ‘MyNumber’ with three data members of type 
integer. Create and initialize the object using default constructor, parameterized 
constructor and parameterized constructor with default value. Write a member function to 
display average of given three numbers for all objects.    */

#include<iostream>
using namespace std;
class mynumber
{
    public:
    int a,b,c;

    mynumber()
    {
        a=10;
        b=30;
        c=50;
    }
    mynumber(int a1,int b1,int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
    mynumber(int a1,int b1=100)
    {
        a=a1;
        b=b1;
        c=b1;
    }
    void disp()
    {
        int avg=(a+b+c)/3;
        cout<<"average:"<<avg<<endl;
    }


};
int main()
{
    mynumber ob;
    ob.disp();

    mynumber ob1(10,20,90);
    ob1.disp();

    mynumber ob2(50,50);
    ob2.disp();
    
}
