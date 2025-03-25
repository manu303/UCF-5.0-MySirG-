//recursive function to print first n odd natural numbers.
#include<stdio.h>
int oddnatnum(int n);
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    oddnatnum(n);
    return 0;
}

int oddnatnum(int n)
{
    if(n==1)
        return printf("%d ",1);
    oddnatnum(n-1);
    printf("%d ",(n*2)-1);
}