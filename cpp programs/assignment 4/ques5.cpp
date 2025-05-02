//function to check whether the given number is a term in a fibonacci series or not.
#include<iostream>
using namespace std;
int fibb(int num);
int main()
{
    int num;
    cout<<"enter a number:";
    cin>>num;
    if(fibb(num))
        cout<<num<<" is present in fibonacci series.";
    else
        cout<<num<<" is not present in fibonacci series.";
    return 0;
}

int fibb(int num)
{
    int a=-1,b=1;
    int c = a+b;
    while(c<=num)
    {
        if(num==c)
        {
            return 1;
        }
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}