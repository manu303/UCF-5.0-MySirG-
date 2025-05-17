//Define a class Complex with appropriate instance variables and member functions.Define following operators in the class: + - * ==
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imag;
    public:
        Complex():real(0),imag(0)
        {}
        void set_data(int x,int y)
        {
            real=x;
            imag=y;
        }
        void show_data()
        {
            cout<<real<<"+"<<"("<<imag<<")i"<<endl;
        }
        Complex operator+(Complex num)
        {
            Complex temp;
            temp.real = real + num.real;
            temp.imag = imag + num.imag;
            return temp;
        }
        Complex operator-(Complex num)
        {
            Complex temp;
            temp.real = real - num.real;
            temp.imag = imag - num.imag;
            return temp;
        }
        Complex operator*(Complex num)
        {
            Complex temp;
            temp.real = (real * num.real) - (imag * num.imag);
            temp.imag = (real * num.imag) + (imag * num.real);
            return temp;
        }
        bool operator==(Complex num)
        {
            return (real == num.real && imag == num.imag);
        }
};
int main()
{
    Complex num1,num2,num3;

    num1.set_data(2,3);
    num2.set_data(3,4);

    cout << "num1: ";
    num1.show_data();
    cout << "num2: ";
    num2.show_data();

    num3 = num1 + num2;
    cout << "num1 + num2 = ";
    num3.show_data();

    num3 = num1 - num2;
    cout << "num1 - num2 = ";
    num3.show_data();

    num3 = num1 * num2;
    cout << "num1 * num2 = ";
    num3.show_data();

    if(num1 == num2)
        cout<<"num1 == num2 is True"<<endl;
    else
        cout<<"num1 == num2 is False"<<endl;

    Complex num4, num5;
    num4.set_data(2, 3);
    num5.set_data(2, 3);
    if(num4 == num5)
        cout<<"num4 == num5 is True"<<endl;
    else
        cout<<"num4 == num5 is False"<<endl;

    return 0;
}