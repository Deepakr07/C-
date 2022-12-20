#include<iostream>
using namespace std;
class fact
    {
        int factorial,num;
        public:
        fact()
        {
           factorial = 1;
        }

        int calculate()
        {
            int i;
            cout<<"Enter the number ";
            cin>>num;
            for ( i = 1; i <= num; i++)
            {
                factorial = factorial *i;
                
            }
            return factorial;
            
        }

    };


    int main()
    {
        fact f1;
        int x = f1.calculate();
        cout<<"Factorial  = "<<x;
        return 0;

    }