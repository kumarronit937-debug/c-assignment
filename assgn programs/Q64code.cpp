#include<iostream>
using namespace std;

class classB;
class classA
{
    private :
    int numA;
    friend void add(classA ,classB);

    public :
    classA() : numA(5){}
};

class classB
{
    private :
    int numB;
    friend void add (classA, classB);

  public :
  classB() : numB(10){}
};

void add(classA objectA , classB objectB)
{
    cout<<"sum of the private numbers :"<<objectA.numA + objectB.numB <<endl;
}

int main()
{
    classA objA;
    classB objB;

    add(objA, objB);

    return 0;
}