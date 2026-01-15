//59. Program to initialize const data members in constructor.

#include<iostream>
using namespace std;
class student
{
    string name;

    public:
    student(string n)
    {
        name=n;
    }
    void display() const
    {
        cout<<"name is:"<<name<<endl;
    }
    };
    int main()
    {
        student s("Ronit");
        s.display();
        return 0;
    }