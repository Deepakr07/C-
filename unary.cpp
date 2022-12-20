#include<iostream>
using namespace std;
class num{
    int a;
    public:
    num(int x = 0)
    {
        a=x;
    }
    friend num operator ++(num);
    void display()
    {
        cout<<a;
    }

};
num operator ++(num n1)
{
    num n2;
    n2.a = n1.a+1;
    return n2;
}


int main()
{
    num n1(5),n2;
    n2=++n1;
    n2.display();
    return 0;
}