//simple inheritance

#include<iostream>
using namespace std ;

class Animal
{
    public :
    
    void sound ()
    {
        cout<<"Animal makes sound "<<endl;
        cout<<"------------------"<<endl;
    }
};

class Dog : public Animal
{
    public :
    void sound()
    {
        cout<<"Dog barks "<<endl;
    }
};

class Cat : public Animal
{
    public :
    void sound()
    {
        cout<<"Cat Meows";
    }
};

int main()
{
   Animal a;
   a.sound();

    Dog d;
    d.sound();

    Cat c;
    c.sound();
    return 0;
}