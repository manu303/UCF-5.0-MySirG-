//recursive code to print sum of digits of given number.
#include<stdio.h>
int sumofdigits(int n);
int main()
{
    int n,res;
    printf("enter n: ");
    scanf("%d",&n);
    res = sumofdigits(n);
    printf("The sum of digits is %d",res);
    return 0;
}

int sumofdigits(int n)
{
    if(n<10)
        return n;
    return (n%10) + sumofdigits(n/10);
}