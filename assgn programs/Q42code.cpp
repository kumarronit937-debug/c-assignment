// program with private and public members

#include <iostream>
using namespace std;

class Employee
{
private:
    float salary;
    

public:
    string name, department, designation;

    void display()
    {
        cout << "Name        :" << name << endl;
        cout << "Department  :" << department << endl;
        cout << "Designation :" << designation<<endl;
        cout<<"---------------------------------------------"<<endl;
    }

    void setdata(float s)
    {
        salary = s;
        
    }
};

int main()
{
    Employee e1, e2;

    e1.name = "Ram";
    e1.department = "IT";
    e1.designation = "Head";
    e1.setdata(180000);

    e2.name = "Rohan";
    e2.department = "IT";
    e2.designation = "Senior Employee";
    e2.setdata(100000);

    e1.display();
    e2.display();

    return 0;
}