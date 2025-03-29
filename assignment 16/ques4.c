//program to check whether a given number is an armstrong or not.
#include <stdio.h>

int main()
{
    int num,count=0,x,y;
    printf("Enter number: ");
    scanf("%d",&num);
    x=num;
    y=num;
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
    if(sum == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
