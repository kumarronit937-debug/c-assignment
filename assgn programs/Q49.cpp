//nestes class

#include<iostream>
using namespace std ;

class Person
{
    public :
    string name ;

    class Address
    {
        public:
        string country;
        int houseno;

    };


    Address add;
    void AddressPlease ()
    {
    cout<<name<<endl<<add.country<<endl<<add.houseno<<endl;
    }
};

int main()
{
   Person p1;
   
   p1.name = "Anurag";
   p1.add.country="India";
   p1.add.houseno= 69;

   p1.AddressPlease();

   return 0;
}










