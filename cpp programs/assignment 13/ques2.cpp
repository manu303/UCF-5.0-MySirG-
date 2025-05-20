//in ques1,define an operator < to compare two fraction objects.

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
        bool operator<(fraction f)
        {
            
             if((numerator/(denominator*1.0)) < (f.numerator/(f.denominator*1.0)))
             {
                return 1;
             }
             else
                return 0;
        }
};

int main()
{
    fraction f1(3,4),f2(3,4),f3;
    f3 = f1+f2;
    f3.show_data();
    if(f1<f2)
        cout<<"f1 is less than f2."<<endl;
    else
        cout<<"f1 is greater than f2 or equal to each other."<<endl;
    return 0;
}