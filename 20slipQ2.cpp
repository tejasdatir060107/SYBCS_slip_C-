/* Write a C++ program to calculate area of cone, sphere and circle by using function 
overloading.     */

using namespace std;
#include<iostream>
class demo
{
	public:
	void area(float r,float l)
	{
		float c=3.14f*r*l;
		cout<<"\narea of cone"<<c;	
	}	
	void area(float r)
	{
		float c=4*3.14f*r*r;
		cout<<"\narea of sphere"<<c;	
	}	
	void area(double r)
	{
		double c=3.14f*r*r;
		cout<<"\narea of circle"<<c;	
	}

};
int main()
{
	demo ob;
	ob.area(2.6f,2.5f);
	ob.area(2.5f);
	ob.area(2.5);
}
