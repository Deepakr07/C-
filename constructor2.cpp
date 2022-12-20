#include<iostream>
using namespace std;
class number{
    int real,img;
    public:
    number(int real,int img)
    {
        this->real = 0;
        this->img = 0;
        this->real = real;
        this->img = img;
        cout<<"The complex number is "<<real<<"+ i"<<img;
    }
};

int main()
{
    int real,img;
    cout<<"Enter the real and imaginary part";
    cin>>real>>img;
    number n1(real,img);
    return 0;
}