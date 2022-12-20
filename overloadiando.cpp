#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
        friend void operator >>(istream &in,complex &c1)
        {
            cout<<"enter the real and imagianary part";
            in>>c1.real>>c1.img;
        }
        friend void operator <<(ostream &out,complex &c2)
        {
            cout<<"enter the real and imagianary part";
            out<<c2.real<<"+"<<c2.img<<"i";
        }
};
int main()
{
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;

}