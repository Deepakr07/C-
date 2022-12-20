#include<iostream>
using namespace std;
class Number
{
	int l,b,h,v;
	public:
		Number()
		{
			cout<<"Enter the length breadth and height";
			cin>>l>>b>>h;
		}
		
		Number(int x , int y , int z)
		{
			l = x;
			b = y;
			h = z;
		}

		Number(Number &n1)
		{
			l = n1.l;
			b = n1.b;
			h = n1.h;
		}

		void volume()
		{
			v = l*b*h;
			
		}
		
		void display()
		{
		cout<<"Volume of box = "<<v;
		}
};

int main()
{

	int ch,l,b,h;
	do
		{
			cout<<"Enter an option :"<<endl;
			cout<<"1.Default Constructor"<<endl;
			cout<<"2.Parameterized Constructor"<<endl;
			cout<<"3.Copy Constructor"<<endl;
			
			cin>>ch;
					switch(ch)
					{
						case 1: 
							{
								Number n1;
								n1.volume();
								n1.display();
								break;	
									
							}

						case 2: 
							{
								cout<<"Enter the length breadth and height ";
								cin>>l>>b>>h;	
								Number n1(l,b,h);
								n1.volume();
								n1.display();
								break;	
									
							}

						case 3: 
							{
								Number n1;
								Number n2(n1);
								n2.volume();
								n2.display();
								break;	
									
							}
					}



		}while(ch!=0);

	return 0;
}













