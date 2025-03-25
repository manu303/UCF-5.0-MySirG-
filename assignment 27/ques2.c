//recursive function to print sum of first n odd numbers.
#include<stdio.h>
int sumnatodd(int n);
int main()
{
    int n,res;
    printf("enter n: ");
    scanf("%d",&n);
    res = sumnatodd(n);
    printf("The sum is %d",res);
    return 0;
}

int sumnatodd(int n)
{
    if(n==1)
        return 1;
    return (n*2)-1 + sumnatodd(n-1);
}