#include<iostream>
using namespace std;
class num
{
    int x,y;
    public:
    num()
    {
        x=5;
        y=5;

        cout<<x<<" "<<y;
    }
    ~num()
    {
        cout<<"destructor called ";
    }

};

int main()
{
    num n1;
    return 0;
}