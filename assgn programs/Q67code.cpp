#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    friend Complex addComplex(Complex, Complex);

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
Complex addComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}

int main()
{
    Complex c1, c2, c3;

    c1.setData(5, 8);
    c2.setData(8, 4);

    c3 = addComplex(c1, c2);

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}