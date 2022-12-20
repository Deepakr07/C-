#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    void get()
    {
        cout<<"Enter the real and imaginary part ";
        cin>>real>>img;
    }

    void display()
    {
        cout<<"The complex nUmber is "<<real<<" + "<<img<<"i";
    }
     Complex friend add(Complex , Complex);
};

Complex add(Complex a, Complex b)
{
Complex c;
c.real = a.real + b.real;
c.img = a.img + b.img;
return c;
}

int main()
{
    Complex c1, c2,c3;
    c1.get();
    c2.get();
    c3 = add(c1,c2);
    c3.display();

}