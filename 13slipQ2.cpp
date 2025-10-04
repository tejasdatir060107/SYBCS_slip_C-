/*Write a C++ program to print the following pattern. 
A    
B C   
D E F  
G H I J                         */


#include<iostream>
using namespace std;
int main()
{
    char a='A';
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<a++<<"  ";
        }
        cout<<"\n";
    }
}
