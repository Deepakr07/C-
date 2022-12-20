#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int n;
    int a[100000];
    cin>>t;
    cin>>n;int flag = 0;
    for(int j = 0 ; j<t ; j++)
    {
        for(int i = 0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        for(int i = 0 ; i<n ; i++)
        {
            if(a[i]%2 != 0)
            ++flag;
        }

    cout<<endl<<flag;

    }

return 0; 
    
    
}