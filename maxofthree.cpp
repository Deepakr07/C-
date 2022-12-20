#include<iostream>
using namespace std;
class Numbers{
    int a,b,c;
    public:
    void get()
    {
        cout<<"Enter three numbers";
        cin>>a>>b>>c;
    }

    inline void max()
    {
        if(a>b && a>c)
        cout<<a<<" is largest";
        else if(b>a && b>c)
        cout<<b<<" is largest ";
        else cout<<c<<" is largest ";
    }
};

int main()
{
    Numbers n1;
    n1.get();
    n1.max();
    return 0;
}