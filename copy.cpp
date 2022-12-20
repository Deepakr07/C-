#include<iostream>
using namespace std;
class stud{

    int roll,adm;
    public:
           stud()
           {
            roll = 0;
            adm = 0;
           }
           void get()
           {
            cin>>roll>>adm;
           }

           void display()
           {
            cout<<"Roll = "<<roll<<" and adm = "<<adm;
           }

           stud(stud &s)
           {
            roll = s.roll;
            adm = s.adm;
           }
};

int main()
{
stud s1;
s1.get();
stud s2(s1);
s2.display();

}