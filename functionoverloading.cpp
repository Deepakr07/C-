#include<iostream>
using namespace std;
class shape
{
    int l,b,base,alt;
    float rad;
    public:
    void area(int x,int y)
    {
        cout<<"Area of rectangle = "<<x*y;
    }

    void area(int x)
    {
        cout<<"Area of square = "<<x*x;
    }

    void area(float r)
    {
        cout<<"Area of circle = "<<3.14*r*r;

    }

};

int main()
{
    int l,b;
    int ch;
    do{
    cout<<"Enter an operation";
    cout<<"1.Rectangle"<<endl;
    cout<<"2.Square"<<endl;
    cout<<"3.Circle"<<endl;
    cin>>ch;
    float r;
    switch (ch)
    {
        case 1: {cout<<"Enter the length and breadth ";
                cin>>l>>b;
                shape s1;
                s1.area(l,b);
                break;
                }



        case 2: {cout<<"Enter the length ";
                cin>>l;
                shape s1;
                s1.area(l);
                break;
                }

        case 3: {cout<<"Enter the radius ";
                cin>>r;
                shape s1;
                s1.area(r);
                break;
                }
    }}while(ch!=0);
    return 0;

}