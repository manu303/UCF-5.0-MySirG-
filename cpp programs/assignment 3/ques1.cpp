//program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter 3 numbers:";
    cin>>a>>b>>c;
    cout<<"Average of "<<a<<","<<b<<" and "<<c<<" is "<<(a+b+c)/3.0;
    return 0;
}