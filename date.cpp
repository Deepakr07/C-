#include<iostream>
using namespace std;
class Date
{
    int date,month,year;
    string day;

    public:
        Date(string s,int x =0,int y= 0,int z =0)
        {
            day = s;
            date = x;
            month = y;
            year = z;
        }

        void display()
        {
            cout<<"The Date entered is "<<date<<"-"<<month<<"-"<<year<<","<<day;
        }

        ~Date(){}
};

int main()
{
    int dd,mm,yy;string day;
    cout<<"Enter the date month year and day ";
    cin>>dd>>mm>>yy>>day;
    Date d1(day,dd,mm,yy);
    d1.display();
    return 0;
    
}