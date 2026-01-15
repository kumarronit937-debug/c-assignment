//Program to dynamically allocate memory in constructor

#include <iostream>
using namespace std;

class Allo
{ n8
    int *ptr;

public:
    
    Allo(int value) 
    {
        ptr = new int;      
        *ptr = value;
        cout << "Constructor called. Memory allocated." << endl;
    }

    void display()
    {
        cout << "Value = " << *ptr << endl;
    }

    
    ~Allo() 
    {
        delete ptr;       
        cout << "Destructor called. Memory deallocated." << endl;
    }
};

int main() {
    Allo obj(10);
    obj.display();

    return 0;
}