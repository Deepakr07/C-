#include<iostream>
#include<cstring>
using namespace std;
class stringrev
{
    char s[20];
    public:
    void get()
    {
        cout<<"Enter the string ";
        cin.getline(s,20);
    }

    void reverse()
    {
        int i;
        int x = strlen(s);
        for(i=x;i>=0;i--)
        cout<<s[i];
    }   

    

};

int main()
{
    stringrev s1;
    s1.get();
    s1.reverse();
    return 0;
}