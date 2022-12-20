#include<iostream>
using namespace std;
class base {
    protected:
    int roll,age;
    public :
    void get()
    {
        //roll = x;
        //age  = y;

        cin>>roll>>age;
    }

    virtual void display(){
        cout<<"In base class";
    }

};

class derived : public base{
    int month;
    public:
    void getdetails()
    {
        cin>>month;
    }

    void display()
    {
        cout<<"In Derived class" ; }
};


int main()
{
    base *b1;
    base b2;
    b1 = &b2;
    b1 ->display();
    derived d1;
    b1 = &d1;
    b1->display();    
}