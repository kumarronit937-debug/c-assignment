#include <iostream>
using namespace std;

class comp
{
private:
    int x, y;

public:
    // Constructor
    comp(int a, int b)
    {
        x = a;
        y = b;

        bool isEqual = (x == y);
        bool isSmall = (x < y);

        cout << "Is x equal to y? : " << isEqual << endl;
        cout << "Is x smaller than y? : " << isSmall << endl;

        if (isSmall)
        {
            cout << "X is smaller than Y" << endl;
        }
        else
        {
            cout << "X is not smaller than Y" << endl;
        }
    }
};

int main()
{
    int x, y;
    cout << "Enter the value of x and y: ";
    cin >> x >> y;

    comp obj(x, y);  

    return 0;
}
