#include<iostream>
using namespace std;
class Num1{
    int x;
    public:
    Num1(int a =5)
    {
        x=a;
    }
    int get()
    {
        return x;
    }
};


class Num2{
    int y;
    public:
    Num2(Num1 &n1)
    {
        y = n1.get();
    }

    void disp()
    {
        cout<<y;
    }

};


int main()
{
    Num1 n1;
    Num2 n2 = n1;
    n2.disp();
}