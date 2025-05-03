//function to print all the prime factors of a given number.
#include<iostream>
using namespace std;
void primefact(int num);
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    primefact(num);
    return 0;
}
void primefact(int num)
{
    int i,j;
    cout<<"Prime factors of "<<num<<" are:";
    for(i=2;i<=num;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            while(num%i==0)
            {
                num = num/i;
                cout<<i<<" ";
            }
            
        }
    }
}