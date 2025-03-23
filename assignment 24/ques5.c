//function to find the sum of first N terms  of the series. 1!/1 + 2!/2 +...+n!/n(TSRS)
#include<stdio.h>
int fact(int n);
int sum(int n);
int main()
{
    int n,result;
    printf("Enter n: ");
    scanf("%d",&n);
    result = sum(n);
    printf("The sum of first %d terms is %d",n,result);
    return 0;
}
//factorial function
int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
//sum function
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum=sum+fact(i)/i;
    return sum;
}
