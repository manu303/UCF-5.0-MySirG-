//function to calculate HCF of two numbers.
#include<iostream>
using namespace std;
int hcf(int a,int b);
int main()
{
    int a,b,res;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    res = hcf(a,b);
    cout<<"HCF of "<<a<<","<<b<<" is:"<<res;
    return 0;
}
int hcf(int a,int b)
{
    if(b==0)
        return a;
    return hcf(b,a%b);
}