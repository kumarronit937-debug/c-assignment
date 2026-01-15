#include<iostream>
using namespace std;

class MyClass
{
    private :
      int privateData;

      friend void friendfunction(MyClass obj);

      public:

      MyClass() : privateData(100) {}

};

void friendfunction(MyClass obj )
{
    cout<<"The private Data is  : "<<obj.privateData<<endl;
}

int main()
{
    MyClass obj ;
    friendfunction(obj);
    return 0 ;
}