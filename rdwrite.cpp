#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int age,roll,age1,roll1;
    char name[20],name2[20];
    ofstream o1("stud.txt");
    cout<<"Enter the name roll number and age "<<endl;
    cin>>age>>roll>>name;
    o1<<age<< " "<<roll<<" "<<name;
    o1.close();
    ifstream i1("stud.txt");
    i1>>age1>>roll1>>name2;
    cout<<"Name : "<<name2<<endl;
    cout<<"Roll : "<<roll1<<endl;
    cout<<"Age : "<<age1<<endl;
    i1.close();
}