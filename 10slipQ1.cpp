/*Write a C++ program to create a class Distance with data members feet and inches. Write 
member functions for the following: 
a. To accept distance 
b. To display distance 
c. To add two distance objects 
(Use object as a function argument and function returning object). */


using namespace std;
#include<iostream>

class distanc
{
    public:
    int feet,inches;
    void accept()
    {
        cout<<"enter distance in feet and inches:";
        cin>>feet>>inches;
    }
    void disp()
    {
        while(inches>=12)
        {
            feet++;
            inches=inches-12;
        }
        cout<<feet<<" feet "<<inches<<" inches "<<endl;
    }
    friend distanc add(distanc ob,distanc ob1);
};
    
        distanc add(distanc ob,distanc ob1)
        {
            distanc ob2;
            ob2.feet=ob.feet+ob1.feet;
            ob2.inches=ob.feet+ob1.inches;
            return ob2;
        }

        
int main()
{
    distanc ob,ob1,ob2;
    ob.accept();
    ob1.accept();

    ob.disp();
    ob1.disp();
    ob2=add(ob,ob1);
    ob2.disp();

}

