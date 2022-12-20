#include<iostream>
using namespace std;
class vehicle
{
    protected:
    int mileage, price;
    public:
    void read1(){
        cout<<"Enter the mileage and price "<<endl;
        cin>>mileage>>price;
    }
};

class car : public vehicle
{
    protected:
    int cost,warranty,seating;
    char fuel[20];
    public:
    void read2(){
        cout<<"cost warranty and seating capacity and fuel type";
        cin>>cost>>warranty>>seating>>fuel;}
        void display()
        {
            cout<<"CAR  DETAILS"<<endl;
            cout<<"Mileage "<<mileage<<endl;
            cout<<"Price "<<price<<endl;
            cout<<"Cost "<<cost<<endl;
            cout<<"Warranty "<<warranty<<endl;
            cout<<"Seating Capacity "<<seating<<endl;
            cout<<"Fuel Type "<<fuel<<endl;
        }
    };



    class bike : public vehicle
{
    protected:
    int cylinders,gears;
    char cooling[20],wheel;
    public:
    void read3()
    {
        cout<<"Enter the number of cylinders gears coolin type and type of wheel";
        cin>>cylinders>>gears>>cooling>>wheel;
    }
    void display()
    {
            cout<<"BIKE  DETAILS"<<endl;
            cout<<"Mileage "<<mileage<<endl;
            cout<<"Cylinders "<<price<<endl;
            cout<<"Gears "<<price<<endl;
            cout<<"Coolng type "<<price<<endl;
            cout<<"Wheel type"<<price<<endl;            

    }

};

int main()
{
car b1;
b1.read1();
b1.read2();
b1.display();

bike b2;
b2.read1();
b2.read3();
b2.display();
return 0;
}