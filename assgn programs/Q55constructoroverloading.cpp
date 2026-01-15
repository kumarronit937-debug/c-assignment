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

    Marks(float c , float d)
     {
        a = c;
        b = d;
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
    float c ,d;

    cout << "ENter The value of c and d ( float Values) :" << endl;
    cin >> c >> d;

    cout << "ENter The value of x and y " << endl;
    cin >> x >> y;

    Marks m1;
    Marks m2(c,d);
    Marks m3(x, y);
    m1.display();
    m2.display();
    m3.display();

    return 0;
}