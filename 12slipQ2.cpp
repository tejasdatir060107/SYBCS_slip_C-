/*Write a C++ program to create a class Student with data members Roll_No, 
Student_Name, Class. Write member functions to accept and display Student information 
also display count of students. (Use Static data member and Static member function).*/

#include<iostream>
using namespace std;

class student
{
    public:
    int rno;
    char name[20],classs[20];
    static int count;

     void accept()
    {
        cout<<"enter roll no:";
        cin>>rno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter class:";
        cin>>classs;
    }
    void disp()
    {
        count++;
        cout<<endl<<"student roll no:"<<rno<<endl;
        cout<<"student name:"<<name<<endl;
        cout<<"student class:"<<classs<<endl;
   }
   static void  showdown()
   {
        cout<<"number count of student:"<<count;
   }

};
int student::count=0;
int main()
{
    student ob,ob1,ob2;
    ob.accept();
    ob1.accept();
    ob2.accept();

    ob.disp();
    ob1.disp();
    ob2.disp();

    student::showdown();
}
