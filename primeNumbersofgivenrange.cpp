#include<iostream>
using namespace std;
class prime
{
    int x,y;
    public:
        void calculate()
        {
            int a,b;
            cout<<"Enter the lower and upper limit ";
            cin>>a>>b;
            int i,flag = 0;
            for(i = a ; i<b ; i++)
            {
                flag = 0;
            for(int k = 2 ; k<i ; k++)
            {
                if(i%k == 0)
                //cout<<i;
                flag = 1; 
                //cout<<i;
            }
            if(flag == 0)
            cout<<i<<" ";

            }
        }
       /* void get()
        {
            cout<<"Enter the lower and upper limit ";
            cin>>x>>y;
            calculate();
        }*/
};
int main()
{
    prime p1;
    p1.calculate();
    return 0;

}