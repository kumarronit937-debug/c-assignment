/*
#include<iostream>
using namespace std ;

int main()
{
    char c ='A';
    cout<<"ASCII vale of 4 is : "<<int(c);
    return 0;
}

*/


#include<iostream>
using namespace std;

int ascii(char c)
{
    cout<<"The ASCII value of "<<c<<" : "<<int(c);
    return 0 ;
}

int main()
{
    char c;
    cout<<"Enter the character :";
    cin>>c;
    ascii(c);
    return 0; 
}