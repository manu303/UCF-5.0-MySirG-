//recursive function to print first n even numbers in reverse order.
#include<stdio.h>
int evennatnumrev(int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    evennatnumrev(n);
    return 0;
}

int evennatnumrev(int n)
{
    if(n==1)
        return printf("%d ",2);
    printf("%d ",2*n);
    evennatnumrev(n-1);
}