/*
Define a class complex with instance variables for real and imaginary part of a complex number.Define only one parameterised constructor in the class to initialise complex object.Also define showdata method in the class to display object data.Now create an array of complex class with size 5 and display values of each object.
*/

#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imag;
    public:
        Complex(int x,int y)
        {
            real = x;
            imag = y;
        }
        void ShowData()
        {
            cout<<"Real: "<<real<<endl;
            cout<<"Imag: "<<imag<<endl;
            cout<<endl;
        }
};

int main()
{
    Complex c[5]=
    {
        Complex(1,2),
        Complex(3,4),
        Complex(1,9),
        Complex(5,6),
        Complex(8,2),
    };

    for(int i=0;i<5;i++)
    {
        c[i].ShowData();
    }
    
    return 0;
}