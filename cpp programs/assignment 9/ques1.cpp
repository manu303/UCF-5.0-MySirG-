/*
Define a class complex to represent a complex number with instance variables a and b to store real and imaginary parts.Also define following member functions
1.void setData(int,int)
2.void ShowData()
3.Complex add(complex)
4.Complex Subtract(Complex)
5.Complex Multiply(complex)
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void ShowData()
        {
            cout<<"real:"<<a<<endl;
            cout<<"imag:"<<b<<endl;
        }
        Complex add(Complex c1)
        {
            Complex temp;
            temp.a = a+c1.a;
            temp.b = b+c1.b;
            return temp;
        }
        Complex subtract(Complex c1)
        {
            Complex temp;
            temp.a = a-c1.a;
            temp.b = b-c1.b;
            return temp;
        }
        Complex multiply(Complex c1)
        {
            Complex temp;
            temp.a = a*c1.a;
            temp.b = b*c1.b;
            return temp;
        }
};

int main()
{
    Complex n1,n2,add,sub,mul;
    n1.setData(4,5);
    n2.setData(9,10);
    n1.ShowData();
    n2.ShowData();
    add = n1.add(n2);
    sub = n1.subtract(n2);
    mul = n1.multiply(n2);
    add.ShowData();
    sub.ShowData();
    mul.ShowData();
    add = n2.add(n1);
    sub = n2.subtract(n1);
    mul = n2.multiply(n1);
    add.ShowData();
    sub.ShowData();
    mul.ShowData();
    return 0;
}