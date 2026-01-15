#include<iostream>
using namespace std;
int main()
{
    int  i,n , a=0,b=1,c;
    cout<<"Enter Number of trems :";
    cin>>n;
     cout<<a<<" "<<b<<" " ;
    for(i=3;i<=n;i++)

    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0  ;

}
