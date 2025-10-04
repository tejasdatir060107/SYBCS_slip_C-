
/*Write a C++ program using class to accept and display ‘n’ Products information, also display 
information of a product having maximum price. (Use array of objects and dynamic memory 
allocation).*/ 


#include<iostream>
using namespace std;
class product
{

    public:
    int pno,price;
    char pname[20];
    void accept()
    {
        cout<<"enter product no,name,price:";
        cin>>pno>>pname>>price;
    }
    void disp()
    {
        cout<<endl<<"product no:"<<pno<<endl;
        cout<<"product name:"<<pname<<endl;
        cout<<"product price:"<<price<<endl;
    }
    static void max(product ob[],int n)
    {
        int max_pos=0;
        int max=ob[0].price;
        for(int i=0;i<n;i++)
        {
            if(ob[i].price>max)
            {
                max=ob[i].price;
                max_pos=i;
            }
        }
        cout<<"product no:"<<ob[max_pos].pno<<endl;
        cout<<"product name:"<<ob[max_pos].pname<<endl;
        cout<<"product price:"<<ob[max_pos].price<<endl;
    }
};
int main()
{
    product *ob;
    int n;
    cout<<"enter limit:";
    cin>>n;
    ob=new product[n];
    for(int i=0;i<n;i++)
    {
        ob[i].accept();
    }
    for(int i=0;i<n;i++)
    {
        ob[i].disp();
    }

    cout<<endl<<"information of product having maximum price:"<<endl;
        product::max(ob,n);
}
