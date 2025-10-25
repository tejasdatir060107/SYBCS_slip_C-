/*Q.1) Design a base class Employee (emp-code, name). Derive two classes as Fulltime (daily
rate, number of days, salary) and Part time (number of working hours, hourly rate, salary)
from Employee. Write a C++ menu driven program to:
i. Accept the details of ‘n’ employees and calculate the salary.
ii. Display the details of ‘n’ employees.
iii. Search a given Employee. */


#include<iostream>
using namespace std;
class employee
{
    public:
        int emp_code;
        char name[30];
        void accept()
        {
            cout<<"enter employee code and name:";
            cin>>emp_code>>name;
        }
        void disp()
        {
            cout<<endl<<"employee code:"<<emp_code<<endl;
            cout<<"employee name:"<<name<<endl;
        }
};
class fulltime:public employee
{
    public:
        int drate,no_of_day,salary;
        void full_accept()
        {
            employee::accept();
            cout<<"enter daily rate:";
            cin>>drate;
            cout<<"enter number of days:";
            cin>>no_of_day;
            
            salary=drate*no_of_day;
        }
        void full_disp()
        {
            employee::disp();
            cout<<"daily rate:"<<drate<<endl;
            cout<<"no of days:"<<no_of_day<<endl;
            cout<<"salary:"<<salary<<endl;
        }
};
class parttime:public employee
{
    public:
        int no_of_work_hour,hourly_rate,salary;
        void part_accept()
        {
            employee::accept();
            cout<<"enter working hour:";
            cin>>no_of_work_hour;
            cout<<"enter hourly rate:";
            cin>>hourly_rate;
            salary=no_of_work_hour*hourly_rate;
        }
        void part_disp()
        {
            employee::disp();
            cout<<"working hour:"<<no_of_work_hour<<endl;
            cout<<"hourly rate:"<<hourly_rate<<endl;
            cout<<"salary:"<<salary<<endl;
        }
};
int main()
{
    

    int a,n,ch;
    
    cout<<endl<<"1-fulltime:\n2-parttime:";
    cin>>a;


    cout<<"enter limit:";
    cin>>n;
    
    fulltime f[n];
    parttime p[n];
    do
    {
    	cout<<"\nMENU\n1-accept deatil\n2-disp detail\n3-search\nenter choice\n";
    	cin>>ch;
    	switch(ch)
    	{

    		case 1:
            	if(a==1)
            	{
                	for(int i=0;i<n;i++)
                	{
                		f[i].full_accept();
                	}
            	}
            	else
            	{
                	for(int i=0;i<n;i++)
                	{
                    	p[i].part_accept();
                	}
            	}
    		break;
    		
    		case 2:
            	if(a==1)
            	{
                	for(int i=0;i<n;i++)
                	{
                    	f[i].full_disp();
                	}
            	}
            	else
            	{
               		for(int i=0;i<n;i++)
                	{
                    	p[i].part_disp();
                	}
            	}
    		break;

    		case 3:
    			int search;
            	cout<<"enter emp code to search:";
            	cin>>search;
		
        		if(a==1)
        		{
            
                	for(int i=0;i<n;i++)
                	{
                    	if(f[i].emp_code==search)
                    	{
                        	cout<<"detail of search employee"<<endl;
                        	f[i].full_disp();
                    	}
                	}
        		}
        		else
            	{
                	for(int i=0;i<n;i++)
                	{
	                	if(p[i].emp_code==search)
   		            	{
                        	cout<<"detail of search employee"<<endl;
                	    	    p[i].part_disp();
                    	}
                	}
            	}
        	break;
			default:cout<<"invalid choice......";
    	}	
    }while(ch!=4);
}
