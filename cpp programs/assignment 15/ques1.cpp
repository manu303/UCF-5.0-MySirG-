/*
Define a class Complex and provide a unary friend operator - to negate the real and imaginary part of a complex number.
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imag;
    public:
        Complex()
        {
            real=0;
            imag=0;
        }
        Complex(int real,int imag)
        {
            this->real=real;
            this->imag=imag;
        }
        friend Complex operator-(Complex);
        void display()
        {
            cout<<real<<"+i("<<imag<<")"<<endl;
        }
};
Complex operator-(Complex c)
{
    Complex temp;
    temp.real = -c.real;
    temp.imag = -c.imag;
    return temp;
}

int main()
{
    Complex c1(3,4),c2;
    c2=-c1;
    c2.display();
    return 0;
}