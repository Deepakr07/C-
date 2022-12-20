#include<iostream>
using namespace std;
class Number{
    int a ,b;
    public:
    void get()
    {
        cout<<"Enter two numbers ";
        cin>>a>>b;
        display(1);
        swap(a,b);
        display(2);
    }

    void display(int x)
    {
        if (x == 1)
        cout<<"Before swap X = "<<a<<" Y = "<<b;
        else if(x == 2)
        cout<<"After swap X = "<<a<<" Y = "<<b;
    }

    void swap(int &x,int &y)
    {
        int temp;
        temp = x;
        x=y;
        y = temp;
    }
};

int main()
{
    Number n1;
    n1.get();
    return 0;
}