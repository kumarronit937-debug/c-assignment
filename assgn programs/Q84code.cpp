//HERARCHICAL INHERITANCE
#include<iostream>
using namespace std ;

class Vehicle
{
    public :
    Vehicle()
    {
        cout<<"This is used for Transport"<<endl;
        cout<<"It can be Automatic or Manual "<<endl;
        cout<<"It has seats to sit "<<endl;
        cout<<"It can be Electric or Hybrid"<<endl;
    }
};

class Car : public Vehicle
{
    public:
    Car()
     {
        cout<<"This is used for Passenger transportation "<<endl;
        
     }
};


class Truck  : public Vehicle
{
    public :
    Truck()
    {
        cout<<"This is used for goods transportation "<<endl;
       
    }
};

int main()
{
    Car c;
    cout<<endl<<endl;
    Truck t;

    return 0 ;
}