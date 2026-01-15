//Default Constructor

#include<iostream>
using namespace std ;

class Person
{   
    public:
    int age ;
    string name;
    Person()
    {
        age = 10;
        name = "Mohan";
    }
};

int main()
{
    Person p1 ;
    cout<<p1.name<<endl;
    cout<<p1.age;
    return 0;
}