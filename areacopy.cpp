#include<iostream>
using namespace std;
class Wall{
    int l,b;
    public:
    Wall()
    {
        cout<<"Enter the length and breadth of the wall";
        cin>>l>>b;

    }

    Wall(Wall &w1)
    {
        l = w1.l;
        b = w1.b;

    }

    void display()
    {
        cout <<"Area of the wall = "<<l*b;
    }
};

int main()
{
    Wall w1;
    Wall w2(w1);
    w2.display();
    return 0;
}