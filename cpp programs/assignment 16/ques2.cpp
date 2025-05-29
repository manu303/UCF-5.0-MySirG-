/*
Define a class Complex with instance variables a and b to store real and imaginary part of a complex number.Provide setData() method with formal arguments with the name a and b,to set the values of instance variables.Also define showData() method to display instance member variable values.
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData()
        {
            cout<<a<<"+i("<<b<<")";
        }
};
int main()
{
    Complex c;
    c.setData(3,4);
    c.showData();
    return 0;
}