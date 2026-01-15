//To count objects in program

#include<iostream>
using namespace std ;

class Counter
{
    private:
      static int count;

       public :
          Counter()
          {
            count++;
          }

          void display()
          {
            cout<<"The number of objects created :"<<count;
          }
};
  

int Counter::count=0;
int main()
{
    Counter c1,c2,c3,c4;
    c2.display();



    return 0;
}
