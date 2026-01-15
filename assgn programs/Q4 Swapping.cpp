// Q4. wap to swap two numebers without using third varible
#include<iostream>
#include<conio.h>
 using namespace std;
 int main()
 {
   int a , b ;
   cout<<"Enter a =";
   cin>>a;
   cout<<"Enter b =";
   cin>>b;
   cout<<"Before swappind 'a' =";
   cout<<a<<"\n";
   cout<<"Before swappind 'b' =";
   cout<<b<<"\n";
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"After swapping a =";
   cout<<a<<"\n";
   cout<<"After swapping b =";
   cout<<b<<"\n";

   return 0;


 }










