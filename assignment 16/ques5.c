//program to print all armstrong numbers under 1000
#include <stdio.h>

int main()
{
    int j;
    for(j=0;j<1000;j++)
    {
        int count=0,x,y;
        x=j;
        y=j;
        //count digits
        while(x)
        {
            x=x/10;
            count++;
        }
        int digits,i,sum=0,prod;
        for(i=1;i<=count;i++)
        {
            digits = count;
            prod=1;
            while(digits)
            {
            prod = prod * (y%10);
            digits--;
            }
            sum = sum + prod;
            y=y/10;
        }
        if(sum == j)
            printf("%d ",j);
    }
    return 0;
}
