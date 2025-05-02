//function to print all prime numbers between two given numbers.
#include<iostream>
using namespace std;
void prime_nums(int start,int end);
int main()
{
    int start,end;
    printf("Enter starting number:");
    scanf("%d",&start);
    printf("Enter ending number:");
    scanf("%d",&end);
    prime_nums(start,end);
    return 0;
}
//function definition
void prime_nums(int start,int end)
{
    int i,j;
    printf("Prime numbers between %d and %d are:",start,end);
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
            printf("%d ",i);
        }
        
    }
}
