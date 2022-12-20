#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void area() = 0;
};

class square :public Shape
{
    int l;
    public:
    void area()
    {
        cin>>l;
        cout<<"AREA of square = "<<l*l;
    }

};

class rectangle :public Shape
{
    int l,b;
    public:
    void area()
    {
        cin>>l>>b;
        cout<<"AREA of rectangle = "<<l*b;
    }

};

int main()
{
    Shape *p1;
    square s1;
    p1 = &s1;
    p1->area();
    rectangle r1;
    p1 = &r1;
    p1->area();
    return 0;
}