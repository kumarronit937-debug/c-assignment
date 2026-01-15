//copy crting manually

#include<iostream>
using namespace std ;

int main()
{
    int num = 90;

    int *p = &num;

    cout<<"The value of num :  "<<num<<endl;
    cout<<"The address of num : "<<&num<<endl;
    cout<<"The valu accessed via pointer *p :"<<*p<<endl;

    *p=98;

    cout<<"New value of num is "<<num <<endl;
    return 0;
}