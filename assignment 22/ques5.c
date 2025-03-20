//function to print all prime factors of a given number ex:36 -->2,2,3,3 (TSRN)
#include<stdio.h>
#include<stdlib.h>
void primefact(int num);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    primefact(num);
    return 0;
}

void primefact(int num)
{
    int i,j;
    for(i=2;i<=num;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            while(num>1)
            {
                if(num%i==0)
                {
                    printf("%d ",i);
                    num=num/i;
                    if(num==1)
                        exit(0);
                }
                else
                    break;
            }
        }
    }
}