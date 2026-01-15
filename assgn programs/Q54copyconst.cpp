#include<iostream>
using namespace std;

class Area
{
    public:
    int aoc;
         //parametrised constructor
    Area(int r)
    {
      aoc=3.14*r*r;   
    }

          //copy constructor

     Area(Area& a )
     {
        aoc=a.aoc;
     }     
};

int main()
{ int r;
    cout<<"Enter the radius of the cirle :"<<endl;
    cin>>r; 
    Area a1(r);
    Area a2(a1);

    cout<<"Area of Circle :"<<a2.aoc;

    return 0;

}