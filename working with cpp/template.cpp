#include <bits/stdc++.h>

using namespace std;




/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fizzBuzz(int n) {
for(int i=1;i<n+1;i++)
{
    if(i%3==0 && i%5==0)
cout<<"FizzBuzz"<<endl;
else if(i%3==0 && i%5!=0)
cout<<"Fizz"<<endl;
else if(i%5==0 && i%3!=0)
cout<<"Buzz"<<endl;
else if(i%3!=0 && i%5!=0)
cout<<i<<endl; 

}
}

int main()

{
    int n;
  cin<<n;
  fizzBuzz(n);
  retrn 0;
}
