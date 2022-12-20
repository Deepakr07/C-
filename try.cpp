#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
   try
    {
        if(b==0)
        throw(b);
        cout<<"result ="<< a/b;
    }
    catch(int x )
    {
        cout<<"division with zero not possible ";
    }
    
}