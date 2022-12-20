#include<iostream>
using namespace std;
class length{
    char a[20];
    public:
    void get()
    {
        cout<<"Enter the string ";
        gets(a);
        int x=len(a);
        cout<<"Length of the string is "<<x;

    }

    int len(char*b)
    {
        static int count = 0;
        if(*b== NULL)
        return count;
        else
        {
            ++count;
            return len(++b);
        }
    }

};

int main()
{
    length l1;
    l1.get();
    return 0;
}