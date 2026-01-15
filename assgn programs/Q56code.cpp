#include <iostream>
using namespace std;

class Demo
 {
public:
    Demo()
    
    {
        cout << "xyz"<< endl;
    }

    ~Demo() {
        cout << "abc" << endl;
    }
};

int main() 
{
   Demo d1;
   Demo d2;
   return 0;
}