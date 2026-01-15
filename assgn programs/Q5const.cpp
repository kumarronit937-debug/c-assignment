#include<iostream>
using namespace std ;

int main()
{
    const  float pi = 3.14;
    float area ;
    float r ;
    cout<<"Enter the radius ";
    cin>>r;

    area = pi *r*r;

    cout<<"The area of the circle is "<<area;
    return 0 ;

}  