//recursive function to print odd numbers in reverse order.
#include<stdio.h>
int oddnatnum(int n);
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    oddnatnum(n);
}

int oddnatnum(int n)
{
    if(n==1)
        return printf("%d ",1);
    printf("%d ",n*2-1);
    oddnatnum(n-1);
}