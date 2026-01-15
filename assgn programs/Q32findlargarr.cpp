//find largest no in array 

#include<iostream>
using namespace std ;
int main()
{
    int i ,a[5];

    //insertion 
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
      
   // display elements 
     for(i=0;i<5;i++)
    {
        cout<<a[i];
    }

  int largest= a[0];
  for(i=1;i<5;i++)
   {
      if(a[i]>largest)
      {
        largest = a[i];
      }  
  
   }
   cout<<"The largest number is : "<<largest;

   return 0 ;

}
