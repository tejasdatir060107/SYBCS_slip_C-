/*Design a Base class Customer (name, phone-number). Derive a class Depositor (accno, 
balance) from Customer. Again, derive a class Borrower (loan-no, loan-amt) from 
Depositor. Write necessary member functions to read and display the details of ‘n’ 
customers*/

#include<iostream>
using namespace std;
class customer
{
    public:
    char name[20],phno[10];

    void accept()
    {
        cout<<endl<<"enter customer name:"<<endl;
        cin>>name;
        cout<<"enter customer phone number:";
        cin>>phno;
    }
};
class depositer:public customer
{
    public:
        int accno,balance;

        void accept1()
        {
            cout<<"enter account number:";
            cin>>accno;
            cout<<"enter account balance:";
            cin>>balance;
        }
};
class browwer:public depositer
{
    public:
    int loan_no,loan_amt;

    void accept3()
    {
        cout<<"enter loan no:";
        cin>>loan_no;
        cout<<"enter loan amount:";
        cin>>loan_amt;
    }
    void disp()
    {
        cout<<endl<<"customer name:"<<name<<endl;
        cout<<"customer phone number:"<<name<<endl;
        cout<<"account number:"<<accno<<endl;
        cout<<"account balance:"<<balance<<endl;
        cout<<"loan number:"<<loan_no<<endl;
        cout<<"loan amount:"<<loan_amt<<endl;
    }
};
int main()
{
    browwer ob[20];
    int i,n;
    cout<<"enter limit:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        ob[i].accept();
        ob[i].accept1();
        ob[i].accept3();
    }
    for(i=0;i<n;i++)
    {
        ob[i].disp();
    }
}
