#include <iostream>
using namespace std;

class Swap
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << "  b = " << b << endl;
    }
    friend void swapValues(Swap &s);
};

void swapValues(Swap &s)
{
    int temp;
    temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main()
{
    Swap obj;

    obj.setData(56, 22);

    cout << "Before Swapping: ";
    obj.display();

    swapValues(obj);

    cout << "After Swapping: ";
    obj.display();

    return 0;
}