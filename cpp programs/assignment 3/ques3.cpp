#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Before swapping: ";
    cout<<"a="<<a<<","<<"b="<<b<<endl;
    a=(a+b)-(b=a);
    cout<<"After swapping: ";
    cout<<"a="<<a<<","<<"b="<<b<<endl;
}