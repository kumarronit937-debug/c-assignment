// To find area
#include <iostream>
using namespace std;

class Area
{
private:
    int length, brdth;

public:
    void getdata(int a, int b)
    {
        length = a;
        brdth = b;
    }

    void calculate()
    {
        cout << "Area of the Ractangle : " << length * brdth;
    }
};

int main()
{
    Area r;
    int a, b;
    cout << "Enter the value of Length and Breadth" << endl;
    cin >> a >> b;
    r.getdata(a, b);
    r.calculate();
    return 0;
}