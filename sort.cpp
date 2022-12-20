#include<iostream>
using namespace std;
int main()
{
    int a[20],i,n,j,key;
    cout<<"Enter the number of elemets "<<endl;
    cin>>n;
    cout<<"Enter the elements "<<endl;
    for(i = 1; i<=n ; i++)
    {
        cin>>a[i];
    }

    for(j = 1 ; j<=n;j++)
    {
        key = a[j];
        i = j-1;
        while(i>0 && a[i]>key)
        {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }

    cout<<"The sorted elements are "<<endl;
    for(i = 1; i<=n ; i++ )
    {
        cout<<" "<<a[i];
    }

return 0;
}