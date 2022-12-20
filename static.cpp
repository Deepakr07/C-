#include<iostream>
using namespace std;
class number
{
    static int count;
    public:
    number(){
        
        count++;
    }
     void display()
    {
        cout<<"Number of Objects created = "<<count<<endl;
    }

};
int number :: count = 0;

int main()
{
    number n1;
    n1.display();
    number n2;
    n2.display();
    
}