/*Write a C++ program to calculate the average height of all the students of a class. The 
number of students and their heights are entered by user. (Use array of objects).     */

#include<iostream>
using namespace std;
class student
{
    public:
        float height;
        int num;
            void accept()
            {
                cout<<"enter number of student:";
                cin>>num;
                cout<<"enter height of student:";
                cin>>height;
            }
            void disp()
            {
                cout<<"number of student:"<<num<<endl;
                cout<<"height of student:"<<height<<endl;
                
            }
};
int main()
{
    int total=0,n;
    float avg;
    student ob[10];
    cout<<"enter limit of student:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        ob[i].accept();
        total=total+ob[i].height;
    }
    for(int i=0;i<n;i++)
    {
        ob[i].disp();  
    }
    avg=(float)total/n;
    cout<<"average height of student:"<<avg<<endl;
}
