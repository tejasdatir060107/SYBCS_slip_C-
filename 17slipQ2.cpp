/*Write a C++ program to calculate multiplication of two integer numbers of two different 
classes. (Use friend class). */


#include<iostream>
using namespace std;
class b1;
class a1
{
    public:
    int a;
    void accept()
    {
        cout<<"enter number 1:";
        cin>>a;
    }
    void multiply(a1 obj,b1 obj1);
};
class b1
{
    public:
    int b;
    void accept()
    {
        cout<<"enter number 2:";
        cin>>b;
    }
    void multiply(a1 obj,b1 obj1);
};
void multiply(a1 obj,b1 obj1)
{
    cout<<"multiplication:"<<obj.a*obj1.b;
}
int main()
{
   a1 obj;
    obj.accept();
    b1 obj1;
    obj1.accept();

    multiply(obj,obj1);

}
