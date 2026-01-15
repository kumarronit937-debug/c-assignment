#include <iostream>
using namespace std;

int main()
{
    float  area, r, h, b, l;
    int n ; 
    cout << "1. Area of circle \n";
    cout << "2. Area of Rectangle \n";
    cout << "3. Area of Triangle\n";

    cout << "Enter your selection  : ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Enter the radius ";
        cin >> r;
        area = 3.14 * r * r;
        cout << "Area of circle : " << area;
        break;
    case 2:
        cout << "Enter the length and Breadth :";
        cin >> l >> b;
        area = l * b;
        cout << "Area of Rectangle : " << area;
        break;
    case 3:
        cout << "Entetr the base and height :";
        cin>>b>>h;
        area = 0.5 * b * h;
        cout << "Area of triangle : " << area;
        break;

    default:
        cout << "Invalid choice ";

        return 0;
    }
}