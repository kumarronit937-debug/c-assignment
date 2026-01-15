#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c, i=3, num;

    cout << "Enter the terms";
    cin >> num;

    cout << a << " " << b << " ";

    do
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
       
       i++;
    }

    while (i <= num);
    return 0;
}