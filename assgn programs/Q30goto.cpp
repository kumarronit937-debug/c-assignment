#include<iostream>
using namespace std;
int main()
{
    int a , b , add , sub ;
    cout<<"Enter the Value of a\n";
    cin >>a;

    cout<<"Enter the value of b ";
    cin>>b;
    if(a%2==0 && b%2==0)
       goto addition ;

    else
        goto substraction;
        
    addition :
            add=a+b;
            cout<<"Addition Value : "<<add;
            return 0;
    substraction :
             sub = a-b;
             cout<<"Substraction Value :"<<sub;           

             return 0;
}