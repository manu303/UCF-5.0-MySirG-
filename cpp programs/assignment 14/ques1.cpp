//Define a class Complex and overload following operators as a friend.
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imag;
    public:
        Complex():real(0),imag(0)
        {}
        void set_data(int real,int imag)
        {
            this->real = real;
            this->imag = imag;
        }
        void show_data()
        {
            cout<<real<<"+i("<<imag<<")"<<endl;
        }
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex x,Complex y)
{
    Complex temp;
    temp.real = x.real+y.real;
    temp.imag = x.imag+y.imag;
    return temp;
}
Complex operator-(Complex x,Complex y)
{
    Complex temp;
    temp.real = x.real-y.real;
    temp.imag = x.imag-y.imag;
    return temp;
}
Complex operator*(Complex x,Complex y)
{
    Complex temp;
    temp.real = ((x.real*y.real)-(x.imag*y.imag));
    temp.imag = ((x.real*y.imag)+(x.imag*y.real));
    return temp;
}
int main()
{
    Complex num1,num2,num3;
    num1.set_data(4,5);
    num2.set_data(2,3);
    num3 = num1+num2;
    num3.show_data();
    num3 = num1-num2;
    num3.show_data();
    num3 = num1*num2;
    num3.show_data();
    return 0;
}