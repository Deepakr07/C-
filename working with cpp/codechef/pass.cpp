#include <iostream>
using namespace std;

int main() {
	int fruits,vegetables,fish,n,t,n3,n2,n1;
	cin >> t;
	while (t--)
	{
	    cin>> n >> fruits >> vegetables >> fish;
	    if(n>vegetables)
	    {
	        cout<<"NO"<< endl;
	        
	    }
	    else
	    {
	        if(n == vegetables)
	        {
	            if(vegetables <= fruits || vegetables <= fish)
	            cout<<"YES"<<endl;
	            else
	            {
	                 n1 = fruits;
	                 n2 = vegetables - fruits;
	                if(n2>=fish)
	                {
	                  n3 = fish;
	                  if((n1 + n3) >= n)
	                {
	                    cout << "YES"<<endl;
	                }   else cout<<"NO"<<endl;
	                    
	                }else if(n2<=fish)
	                {
	                    n3 = n2;
	                    if((n1 + n3) >= n)
	                {
	                    cout << "YES"<<endl;
	                }
	                else cout<<"NO"<<endl;
	                }
	                
	            }
	            
	        }
	        
	        else if(fruits >= vegetables || fish >= vegetables)
	        {
	            cout<<"YES"<<endl;}
				 else
	            {
	                 n1 = fruits;
	                 n2 = vegetables - fish;
	                if((n1 + n2) >= n)
	                {
	                    cout << "YES"<<endl;
	                    
	                }
					else cout << "NO"<<endl;
	            }
	        }
	        
	        
	    }

	return 0;    
	}
	

