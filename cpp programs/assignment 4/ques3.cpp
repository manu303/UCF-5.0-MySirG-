//function to calculate x raised to the power y.
#include<iostream>
using namespace std;
float pow(int base,int expo);
int main()
{
    int base,expo;
    float res;
    cout<<"Enter base and exponent:";
    cin>>base>>expo;
    res = pow(base,expo);
    cout<<base<<" raised to the power "<<expo<<" is "<<res;
    return 0;
}
float pow(int base,int expo)
{
    float res=1;
    if(expo>0)
    {
        int i;
        for(i=0;i<expo;i++)
        {
            res = res * base;
        }
        return res;
    }
    else if(expo==0)
        return res;
    else
    {
        int i;
        for(i=0;i<(-expo);i++)
        {
            res = res * base;
        }
        return (1/res);
    }
}