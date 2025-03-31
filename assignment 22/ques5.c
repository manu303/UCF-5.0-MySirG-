//function to print all prime factors of a given number ex:36 -->2,2,3,3 (TSRN)

#include <stdio.h>

int primefactorization(int num)
{
    int i,j;
    for(i=2;i<num;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            while(num%i==0)
            {
                printf("%d ",i);
                num=num/i;
            }
    }
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    primefactorization(num);
    return 0;
}
