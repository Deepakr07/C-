#include<iostream>
using namespace std;
class Shape
{
	int l,b;
	float r,ar;
	public:
	Shape()
	{
		cout<<"Enter the length and breadth of rectangle";
		cin>>l>>b;
		cout<<"Enter the radius of the circle";
		cin>>r;
	}
	
	Shape(int l, int b, float r)
	{
		this->l = l;
		this->b = b;
		this->r = r;
	}
	
	void area()
	{
		cout<<"Area of rectangle ="<<l*b<<endl;
		cout<<"Area of Circle ="<<3.14*r*r<<endl;
	}
};

int main()
{
	int ch,l,b;
	float r;
	do
		{
			cout<<"Enter an Option"<<endl;
			cout<<"1.Default Constructor "<<endl;
			cout<<"2.Parameterized Constructor"<<endl;
			cin>>ch;
			
			switch(ch)
				{
					case 1:{

							Shape s1;
							s1.area();
							break;
									
						}

					case 2:{
							cout<<"Enter the length breadth and radius";
							cin>>l>>b>>r;
							Shape s1(l,b,r);
							s1.area();
							break;
						 }
				}
		}while(ch!=0);
	return 0;
} 