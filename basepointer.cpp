#include<iostream>
using namespace std;
class base{
    public:
    virtual void display()
    {
        cout<<"In base class";
    }
};

class derived:public base{
    public:
    void display()
    {
        cout<<"In derived class";
    }
};

int main()
{
    base *ptr,b1;
   ptr=&b1;
    ptr->display();
    derived b2;
    ptr=&b2;
    ptr->display();
}