//recursive function to print squares of first n natural numbers.
#include<stdio.h>
int squares(int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    squares(n);
    return 0;
}

int squares(int n)
{
    if(n==1)
        return printf("%d ",1);
    squares(n-1);
    printf("%d ",n*n);
}