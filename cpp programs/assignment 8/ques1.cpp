//define a class Complex to represent a complex number .Declare instance member variables to store real and imaginary part of complex number,also define instance member functions to set values of complex number and print values of complex number.
#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,imag;
    public:
        void set_real(int x)
        {
            real=x;
        }
        void set_imag(int y)
        {
            imag=y;
        }
        void print_real()
        {
            cout<<real<<endl;
        }
        void print_imag()
        {
            cout<<imag<<endl;
        }
};

int main()
{
    Complex num;
    num.set_real(5);
    num.set_imag(3);
    num.print_real();
    num.print_imag();
}
