#include<iostream>
using namespace std ;

class MyClass
{
    private :
     int value ;
    
    public :
    
    MyClass(int val) : value (val){}

    void display ()
    {
        cout<<"Address of thr current object (this pointer )":<<this<<endl;
        cout<<"Value of object :"<<this->value<<endl;
    }

};

int main()
{
    MyClass obj(77);
    cout<<"Address of the objrect (obj) in main "<<&obj<<endl;
    obj.dispaly();
    return 0;
}