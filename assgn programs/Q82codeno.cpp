#include <iostream>
using namespace std;

class Vehicle
{
  public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
        cout << "It has cc factor in their engine"<<endl;
        cout << "It has doors "<<endl;
        cout << "It consumes fule "<<endl; 
    }
};


class FourWheeler : public Vehicle
{
  public:
    FourWheeler()
    {
        cout << "4 Wheeler Vehicles" << endl;
    }
};


class Car : public FourWheeler
{
  public:
    Car()
    {
        cout <<"This 4 Wheeler Vehicle is a Car" << endl;
        cout<<"It has Airbags"<<endl;
    }
};

int main()
{
    Car obj;
    return 0;
}