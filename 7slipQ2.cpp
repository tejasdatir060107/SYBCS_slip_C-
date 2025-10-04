/*Write a C++ program to accept two integers and an arithmetic operator (+, -, *, /) from 
user and performs the corresponding arithmetic operation and display the result. (Use 
switch statement).  */

#include<iostream>
using namespace std;


int main()
{
    int a,b;
    char ch;
    cout<<"enter two number:";
    cin>>a>>b;
    
        cout<<endl<<"menu:'+','-','*','/' \nENTER CHOICE:";
        cin>>ch;
        switch(ch)
        {
            case '+':cout<<"addtion"<<a+b<<endl; break;
            case '-':cout<<"subtraction"<<a-b<<endl; break;
            case '*':cout<<"multiple"<<a*b<<endl; break;
            case '/':cout<<"division"<<a/b<<endl; break;
            default:cout<<"invalid choice......";
        }
    
}
