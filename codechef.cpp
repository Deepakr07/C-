#include<iostream>
using namespace std;
int main()
{
    int t,n,count;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin>>n;
        for(int i = 2;i<=n;i++)
        {
            if(n % i == 1)
            {
                count++;
            }
            
        }
        cout<<count+1<<endl;
    }
}