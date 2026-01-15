#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;

    cout << "Enter a =";
    cin >> a;
    cout << "Enter b =";
    cin >> b;
    cout << "Before swappind 'a' =";
    cout << a << "\n";
    cout << "Before swappind 'b' =";
    cout << b << "\n";
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a =";
    cout << a << "\n";1
    
    cout << "After swapping b =";
    cout << b << "\n";

    return 0;
}