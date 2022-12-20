#include<iostream>  
using namespace std;
//ambiguous base class member access
class A
{
private: //..
public:
    void showdata()
    {
        cout<<"hi";
        //...
    }
};
class B: public A
{
    //...
};
class C:  public A
{
    //..
};
class D: public B, public C
{
   
};

int main()
{
    D d1;
    d1.B::showdata();
    return 0;
}