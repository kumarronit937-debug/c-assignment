#include <iostream>
using namespace std;

int main()
{
    int a[9], i , min ;
  
    for (i = 0; i < 9; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < 9; i++)
    {
      cout<<a[i];
    }

    int largest , secondlargest;

    if(a[0]>a[1])
    {
        largest = a[0];
        secondlargest = a[10];
    }
    else
    {
        largest = a[1];
        secondlargest=a[0];
    }


 //   array traverssing
   for(i=2;i<9;i++)
   {
    if(a[i]>largest)
    {
        secondlargest = largest ;
        largest = a[i];
    }

    else if (a[i]>secondlargest&& a[i]!=largest)
          
         secondlargest=a[i];

    }

    cout<<"The second largest id : "<<secondlargest;

    return 0;
}