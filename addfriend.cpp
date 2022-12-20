#include<iostream>
using namespace std;
class Number
{
    int x;
    int sum;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>x;
    }

    void display()
    {
        cout<<"The sum of two objects is "<<sum;
    }

    Number friend sumof(Number,Number);

}; 

Number sumof(Number n1,Number n2)
{
    Number n3;
    n3.sum = n1.x + n2.x;
    return n3;
}

int main()
{
    Number n1,n2,n3;
    n1.get();
    n2.get();
    n3 =sumof(n1,n2);
    n3.display();
    return 0;
}