#include<iostream>
using namespace std;
class Date
{
    int date,month,year;
    public:
        void get()
        {
            cout<<"Enter the date month and year ";
            cin>>date>>month>>year;
        }

        void display()
        {
            cout<<"Previous date = "<<date<<"-"<<month<<"-"<<year<<endl;
        }

        Date operator --()
        {
            Date d1;
            if(date == 1 && month ==1)
            {
                date =31;
                month = 12;
                year = year -1;
                d1.date = date;
                d1.month = month;
                d1.year = year;
            }

           else if(date == 1)
            {
                if(month == 1 ||month == 3 || month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 )
                {date= 31; --month;}
                else 
                {date =30; --month;}

                d1.date = date;
                d1.month = month;
                d1.year = year;

            }
            
            else
            {
                date = date - 1;

                d1.date = date;
                d1.month = month;
                d1.year = year;
            }
            return d1;
        }
};


int main()
{
    Date d1;
    d1.get();
    Date d2;
    d2 = --d1;
    d2.display();
    return 0;

}