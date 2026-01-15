//program define a simple class and creating objects.

#include<iostream>
using namespace std;

class Student
{
    public:

    string name;
    int age;

    void display()
    {
        cout<<" Name  : "<<name<<" | "<<" Age : "<<age<<endl;
    }
};

int main()
{
    Student s1 , s2 ;

    s1.name = " Ronit ";
    s1.age = 20 ;
    
    s2.name = " Sujal";
    s2.age = 20 ;

    s1.display();
    s2.display();

    return 0;
    
}