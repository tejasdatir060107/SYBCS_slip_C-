/*Create a C++ class Employee with data members E_no, E_Name, Designation and Salary. 
Accept two employee’s information and display information of employee having maximum 
salary. (Use this pointer).   */

#include<iostream>
#include<string.h>
using namespace std;
class employee
{
    public:
    int eno;
    char ename[20],desiganation[20];
    float sal;

    void accept(int eno,char ename[],char desiganation[],float sal)
    {
        this->eno=eno;
        strcpy(this->ename,ename);
        strcpy(this->desiganation,desiganation);
        this->sal=sal;
    }
    void disp()
    {
        cout<<endl<<"emp no:"<<eno<<endl;
        cout<<"emp name:"<<ename<<endl;
        cout<<"desiganation:"<<desiganation<<endl;
        cout<<"salary:"<<sal<<endl;
    }
};
int main()
{
    int n;

    employee ob,ob1;
    
     ob.accept(101,"kaushal","professor",75000);
     ob1.accept(120,"akash","clerk",52000);

     if(ob.sal>ob1.sal)
     {
        ob.disp();
     }
     else
     {
        ob1.disp();
     }
    

}
