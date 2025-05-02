//function to print all prime numbers between two given numbers.
#include<iostream>
using namespace std;
void prime_nums(int start,int end);
int main()
{
    int start,end;
    cout<<"Enter starting number:";
    cin>>start;
    cout<<"Enter ending number:";
    cin>>end;
    prime_nums(start,end);
    return 0;
}
//function definition
void prime_nums(int start,int end)
{
    int i,j;
    cout<<"Prime numbers between "<<start<<" and " <<end <<" are:";
    for(i=start+1;i<end;i++)
    {
        if(i<2)
        {
            continue;
        }
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<" "<<i;
        }
        
    }
}
