#include <iostream>
using namespace std;

class Math
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Math m;

    cout << "Addition of two integers: " << m.add(10, 20) << endl;
    cout << "Addition of three integers: " << m.add(10, 20, 30) << endl;
    cout << "Addition of two floats: " << m.add(2.5f, 3.5f) << endl;

    return 0;
}