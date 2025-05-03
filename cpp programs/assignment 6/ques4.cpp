//function to calculate LCM of three numbers.
#include<iostream>
using namespace std;
int lcm(int a,int b,int c);
int main()
{
    int a,b,c,res;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    res = lcm(a,b,c);
    cout<<"LCM of "<<a<<","<<b<<","<<c<<" is "<<res<<endl;
    return 0;
}

int lcm(int a,int b,int c)
{
    int i;
    if(a<b && a<c)
        i=a;
    else if(b<c)
        i=b;
    else
        i=c;
    for(i;i<(a*b*c);i++)
    {
        if(i%a==0 && i%b==0 && i%c==0)
            return i;
    }
    return a*b*c;
}