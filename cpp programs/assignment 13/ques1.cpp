//Define a c++ class fraction
#include<iostream>
using namespace std;
class fraction
{
    private:
        long numerator,denominator;
    public:
        fraction(long n=0,long d=0):numerator(n),denominator(d)
        {}
        void show_data()
        {
            cout<<numerator<<"/"<<denominator<<endl;
        }
        fraction operator+(fraction f)
        {
            fraction temp;
            if((denominator==f.denominator)&&(denominator!=0 && f.denominator!=0))
            {
                temp.numerator = numerator + f.numerator;
                temp.denominator = denominator;
                return temp;
            }
            else if(denominator!=0 && f.denominator!=0)
            {
                temp.denominator = denominator * f.denominator;
                temp.numerator = (numerator*f.denominator)+(f.numerator*denominator);
                return temp;
            }
            else
                cout<<"zero division error make sure you don't divide by zero."<<endl;
            return temp;
        }
};

int main()
{
    fraction f1(3,4),f2(0,2),f3;
    f3 = f1+f2;
    f3.show_data();
    return 0;
}