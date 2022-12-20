#include<iostream>
using namespace std;
class grandpa{
    public:
    char name[20];
    int age;
    public:
    void details()
    {
        cout<<"Enter age and name";
        cin>>age>>name;
    }
};

class son: public virtual grandpa{
    public:
    char name2[20];
    void sondetails()
    {
        cout<<"Enter name ";
        cin>>name;
    }
};

class daughter: public virtual grandpa{
    public:
    char name3[20];
    void ddetails()
    {
        cout<<"Enter name ";
        cin>>name3;
    }
};

class child: public daughter, public son{
   public:
    void display()
    {
        cout<<age<<endl<<name<<endl<<name2<<endl<<name3;
    }
};

int main()
{
    child c1;
    c1.details();
    c1.sondetails();
    c1.ddetails();
    c1.display();
    return 0;
}