//program to find maximum of two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    if(a>b)
        cout<<"maximum number is "<<a;
    else
        cout<<"maximum number is "<<b;
    return 0;
}