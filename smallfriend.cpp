#include<iostream>
using namespace std;
class Number
{
    int size,list[20],smallest,largest;
    public:
    void get()
    {
        cout<<"Enter the array size "<<endl;
        cin>>size;
        cout<<"Enter the array elements "<<endl;
        for(int i = 0 ; i<size ; i++)
        cin>>list[i];
    }
    Number friend evaluate(Number);

    void display()
    {
        cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;
    }

};
Number evaluate(Number n1)
{
    Number n2;
    int small = n1.list[0];
    int large = n1.list[0];
    for(int i = 0; i<n1.size ; i++ )
    {
        if(n1.list[i]>large)
        large = n1.list[i];
        if(n1.list[i]<small)
        small = n1.list[i];
    }

    n2.smallest = small;
    n2.largest = large;
    return n2;
}

int main()
{
    Number n1;
    n1.get();
    Number n2;
    n2 = evaluate(n1);
    n2.display();
    return 0;
    
}