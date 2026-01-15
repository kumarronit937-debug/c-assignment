// Permetrised constructor

// Default Constructor

#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    string name;


    Person(int x, string a)
    {
        age = x;
        name = a;
    }
};

int main()
{

    int x;
    string a;
  
    cout << "Enter the age";
    cin >> x;

    cout << "Enter the name";
    cin >> a;
    Person p1(x, a);
    cout << p1.name << endl;
    cout << p1.age;
    return 0;
}