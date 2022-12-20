#include<iostream>
using namespace std;
class Box
{
    int red,green;
    int sum;
    public:
    void get(int x)
    {
        cout<<"Enter the number of red and green balls of object "<<x;
        cin>>red>>green;
    }
    void display()
    {
        cout<<"Number of red balls = "<<red<<endl;
        cout<<"Number of green balls = "<<green<<endl;
    }

     friend Box operator +(Box,Box);
};

Box operator +(Box b1,Box b2)
{
    Box b3;
    b3.green = b1.green + b2.green;
    b3.red = b1.red + b2.red;
    return b3;
}

int main()
{
    Box b1,b2,b3;
    b1.get(1);
    b2.get(2);
    b3 = b1+b2;
    b3.display();
    return 0;

}