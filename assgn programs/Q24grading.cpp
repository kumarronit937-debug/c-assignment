#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout<<"GRADING SYSTEM \n";
    cout<<"-------------------\n";
    cout << "(95 - 100 = 'A+')\n";
    cout << "(90 - 94  = 'A')\n";
    cout << "(85 - 89  = 'B+')\n";
    cout << "(75-  79  = 'B' )\n";
    cout << "(70 - 74 = 'D')\n";
    cout << "(65 - 69 = 'E')\n";
    cout<<"Less than 60 ='F') \n";
    return 0;

    cout<< "Enter your marks\n";
    cin >> marks;


   if(100<=marks && marks<=95)
   {
    cout<<"You got grade 'A'";
   } 

   return 0;
}