/*Write a C++ program to accept and display Bank Account details as Acc_No, 
Acc_holder_name, Addr, Contact_Number and Balance. Perform deposit of some amount 
and display modified bank account details. (Use manipulators). */

using namespace std;
#include<iostream>
class bank
{
	public:
	int acno;
	char ac_holder_name[20],addr[20],phno[20];
	float bal,rs;
	
	void accept()
	{
		cout<<"enter account no,name,add,phno,bal";
		cin>>acno>>ac_holder_name>>addr>>phno>>bal;
	}
	void deposit()
	{
		cout<<"enter rs to deposite:";
		cin>>rs;
		bal=bal+rs;
		cout<<"successfully deposite.."<<endl;
	}
	void disp()
	{
		cout<<"account no="<<acno<<endl;
		cout<<"name ="<<ac_holder_name<<endl;
		cout<<"addr="<<addr<<endl;
		cout<<"phone no="<<phno<<endl;
		cout<<"balance="<<bal<<endl;
	}

};

int main()
{
	int ch;
	bank ob;
	do
	{
		cout<<endl<<"MENU\n1-accept\n2-deposite\n3-display\nenter choice:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:ob.accept(); break;
			case 2:ob.deposit(); break;
			case 3:ob.disp(); break;
			default:cout<<"invalid choice";
		}
	}while(ch<4);
}
