#include<iostream>
using namespace std ;

class Example
{
    private :
    int num ;

    public :

    void setNum(int num)
    {
        this->num = num ;
    }

    void printNum()
    {
        cout<<"The vause of thr number variable id :" <<this->num<<endl;
    }
};

int main()
{
    Example obj;
    obj.setNum(88);
    obj.printNum();
    return 0;
}