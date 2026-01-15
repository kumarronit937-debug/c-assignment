

#include <iostream>
using namespace std;

class Landvehicle
{
public:
    Landvehicle()
    {
        cout << "This is a Landvehicle" << endl;
    }
};

class Watervehicle
{
public:
    Watervehicle()
    {
        cout << "This is a Watervehicle" << endl;
    }
};

class Amphibiousvehicle : public Landvehicle, public Watervehicle
{
public:
    Amphibiousvehicle()
    {

        cout << "This is a Amphibiousvehicle ";
    }
};

int main()
{
    Amphibiousvehicle obj;
    return 0;
}
