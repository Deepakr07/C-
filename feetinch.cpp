#include<iostream>
using namespace std;
class Number
{
    int feet,inch;
    public:
            void get()
                {
                    cout<<"Enter feet and inch ";
                    cin>>feet>>inch;
                }
            Number operator +(Number n1)
                {
                    Number n2;
                    n2.feet = feet+n1.feet;
                    n2.inch = inch+n1.inch;
                    if(n2.inch>12)
                    {
                        n2.feet = n2.feet+(n2.inch/12);
                        n2.inch = n2.inch%12;
                    } 
                return n2;
                }

                void operator < (Number n1)
                {
                    inch = inch+feet*12;
                    n1.inch =n1.inch + n1.feet*12;
                    if(inch>n1.inch)
                    cout<<"Object 1 is larger "<<endl;
                    else cout<<"Object 2 is larger";
                }
             void display()
             {
                cout<<"Resultant value = "<<feet<<" ft"<<inch<<" inch";
             }       

};

int main()
{

Number n1,n2,n3;
n1.get();
n2.get();
n3 = n1+n2;
n3.display();
n1<n2;
return 0;
}