//Demnstration of break

/*#include<iostream>
using namespace std;
int main()
{
     int i; 
     for(i=1;i<=10;i++)
     {
        if(i==7)
         {
            break;
         }
       cout<<i<<"";
     }
     return 0;
} */


//Demonstration of  CONTINUE


#include<iostream>
using namespace std;
int main()
{
     int i; 
     for(i=1;i<=10;i++)
     {
        if(i==7)
         {
            continue;
         }
       cout<<i<<"";
     }
     return 0;
   }     