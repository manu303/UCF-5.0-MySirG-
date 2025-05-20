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
};

int main()
{
    fraction f1(3,4);
    f1.show_data();
    return 0;
}