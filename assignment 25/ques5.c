//recursive function to print even natural numbers.
#include<stdio.h>
int evennatnum(int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    evennatnum(n);
    return 0;
}

int evennatnum(int n)
{
    if(n==1)
        return printf("%d ",2);
    evennatnum(n-1);
    printf("%d ",2*n);
}