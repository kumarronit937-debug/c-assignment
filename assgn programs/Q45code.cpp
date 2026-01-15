// Arithmetic operations using  class

#include <iostream>
using namespace std;

class Calculation
{

private:
    int sum, difference;

public:
    void add(int x, int y)
    {
        sum = x + y;
    }

    void sub(int a, int b)
    {
        difference = a - b;
    }

    void display()
    {
        cout << "Addition of two numbers : " << sum << endl;
        cout << "Difference of two numbers : " << difference;
    }
};

int main()
{

     int a , b , x ,y ;

    cout<<"entert the value of x and y :"<<endl;
    cin>>x>>y;

    cout<<"entert the value of a and b :"<<endl;
    cin>>a>>b;

   

    Calculation obj;
    obj.add(x, y);
    obj.sub(a, b);
    obj.display();

    return 0;
}