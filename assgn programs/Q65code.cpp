#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    friend class Teacher;
};

class Teacher
{
public:
    void showMarks(Student s)
    {
        cout << "Student Marks: " << s.marks << endl;
    }
};

int main()
{
    Student s1;
    Teacher t1;

    s1.setMarks(67);
    t1.showMarks(s1);

    return 0;
}