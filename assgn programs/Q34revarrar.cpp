#include <iostream>
using namespace std;

int main()
{
    int i, a[5] ,n;

    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Default array \n:";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] ;
    }

    cout<<"\n"<<"Reverse of the array : ";

    for(i=4;i>=0;i--)
    {
        cout<<a[i];
    }
   
    return 0;
}