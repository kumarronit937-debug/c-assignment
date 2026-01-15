#include <iostream>
using namespace std;

class Marks
{
public:
    int a, b;
    // default constructor
    Marks()
    {
        a = 50;
        b = 65;
    }

    Marks(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << " a = " << a << endl;
        cout << " b = " <<b << endl;
    }
};

int main()
{
    int x, y;
    cout << "ENter The value of x and y " << endl;
    cin >> x >> y;
    Marks m1;
    Marks m2(x, y);
    m1.display();
    m2.display();

    return 0;
}