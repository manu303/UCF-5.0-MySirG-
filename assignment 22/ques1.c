//function to calculate the factorial of a number (TSRS)
#include<stdio.h>
int fact(int n);
int main()
{
    int n,result;
    printf("Enter n: ");
    scanf("%d",&n);
    result = fact(n);
    printf("The factorial is %d",result);
    return 0;
}

int fact(int n)
{
    int i,prod;
    for(i=1,prod=1;i<=n;i++)
        prod=prod*i;
    return prod;
}

