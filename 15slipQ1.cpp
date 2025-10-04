/*Design a base class product (Product_Id,Product_Name,Price).Derive a class Discount 
(Discount_In_Percentage) from Product. A customer buys ‘n’ product. Write a C++   
program to calculate total price, total discount.*/

#include<iostream>
using namespace std;

class product
{
    public:
    int product_id;
    char product_name[20];
    float price;

    void accept()
    {
        cout<<"enter product id:";
        cin>>product_id;
        cout<<"enter product name:";
        cin>>product_name;
        cout<<"enter price:";
        cin>>price;
    }
};
class discount:public product
{
    public:
    int discount,total=0,total_discount=0;
    void discountt()
    {
        cout<<"discount in % :";
        cin>>discount;
    }
    int totalprice()
    {
        total=total+price;
        return total;
    }
    int total_dis()
    {
        total_discount=price*discount/100;
        return total_discount;
    }
};
int main()
{
    int total=0,total_discount=0,n;
    discount ob[100];
    cout<<"how many product buy :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ob[i].accept();
        ob[i].discountt();
    }
    for(int i=0;i<n;i++)
    {
        
        total=total+ob[i].totalprice();
        total_discount=total_discount+ob[i].total_dis();
    }
    cout<<"total amount : "<<total<<endl;
    cout<<"total discount:"<<total_discount<<endl;
}
