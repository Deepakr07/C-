#include<iostream>
using namespace std;
class Number{

    static int arr[20],n,key;
    public:
    void read()
    {   cout<<"Enter the array limit";
        cin>>n;
        cout<<"Enter the array";
        for(int i = 0; i<n; i++)
        cin>>arr[i];

    }

    static void search()
    {
        cout<<"Enter the key ";
        cin>>key;
        int flag = 0;
        for(int i = 0 ; i<n; i++)
        {if(arr[i]==key)
        flag = 1;
        }\

        if(flag == 0)
        cout<<"Element not found ";

    }};
    int Number::arr[];
    int Number ::n;
    int Number ::key;

    int main()
    {
        Number n1;
        n1.read();
        n1.search();
        return 0;
    }


