/*Design a Base class Customer (name, phone-number). Derive a class Depositor (accno, 
balance) from Customer. Again, derive a class Borrower (loan-no, loan-amt) from 
Depositor. Write necessary member functions to read and display the details of ‘n’ 
customers.*/

#include<iostream>
using namespace std;
class customer
{
    public:
   char name[20];
    char ph_no[10];
    void accept()
    {
        cout<<"enter coustomer name:";
        cin>>name;
        cout<<"enter phone number:";
        cin>>ph_no;
    }  
};
class depositor: public customer
{
    public:
    int acc_no;
    float bal;
    void accept1()
    {
        cout<<"enter account number:";
        cin>>acc_no;
        cout<<"enter balance:";
        cin>>bal;
    }
};
class browwer:public depositor
{
    public:
    int loan_no;
    float loan_amt;
    void accept3() 
    {
        cout<<"Enter loan number:";
        cin>>loan_no;
        cout<<"enter loan amount:";
        cin>>loan_amt;   
    }
    void disp()
    {
        cout<<endl<<"customer information:"<<endl;
        cout<<"............................................"<<endl;
        cout<<"customer name:"<<name<<endl;
        cout<<"customer phone number:"<<ph_no<<endl;
        cout<<"account number:"<<acc_no<<endl;
        cout<<"account balance:"<<bal<<endl;
        cout<<"loan number:"<<loan_no<<endl;
        cout<<"loan amount:"<<loan_amt;
        cout<<endl<<"...................................."<<endl;
    }
};
int main()
{
    browwer ob[100];
    int n;
    cout<<"enter limit:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	ob[i].accept();
    	ob[i].accept1();
    	ob[i].accept3();
	}
	for(int i=0;i<n;i++)
	{
		ob[i].disp();
	}
}
