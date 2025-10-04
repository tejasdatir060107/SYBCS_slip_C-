/*Write a C++ program to create a class ‘MyMatrix’ which contains two-dimensional integer array 
of size mXn. Write a member function to display sum of all elements of entered matrix. (Use 
Dynamic Constructor for allocating memory and Destructor to free memory of an object).    */

#include<iostream>
using namespace std;
class mymatrix
{
    public:
    int **a,r,c;
    
    mymatrix()
    {
        cout<<"enter no of rows and col:";
        cin>>r>>c;
        a=new int*[r];
        for(int i=0;i<r;i++)
        {
            a[i]=new int[c];
        }
        cout<<"enter element in matrix:"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void disp()
    {
       
        int sum=0;
         for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                sum=sum+a[i][j];
            }
        }
        cout<<"sum of element:"<<sum<<endl;
    }

};
int main()
{
    mymatrix ob;
    ob.disp();
}
