#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int day1,day2,day3;
    char a[20],b[20],c[20];
    ofstream o1,o2;
    o1.open("Months.txt");
    o2.open("Days.txt");
    o1<<"January"<<" "<<"February"<<" "<<"March";
    o2<<"31"<<" "<<"30"<<" "<<"31";
    o1.close();
    o2.close();

    ifstream o3,o4;
    o3.open("Months.txt");
    o4.open("Days.txt");
    o3>>a>>b>>c;
    o4>>day1>>day2>>day3;
    o3.close();
    o4.close();
    cout<<a<<" "<<day1<<endl;
    cout<<b<<" "<<day2<<endl;
    cout<<c<<" "<<day3<<endl;
}