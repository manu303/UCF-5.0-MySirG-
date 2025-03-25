//recursive function to print sum of squares of first n natural numbers.
#include<stdio.h>
int sumnatsquares(int n);
int main()
{
    int n,res;
    printf("enter n: ");
    scanf("%d",&n);
    res = sumnatsquares(n);
    printf("The sum is %d",res);
    return 0;
}

int sumnatsquares(int n)
{
    if(n==1)
        return 1;
    return (n*n) + sumnatsquares(n-1);
}