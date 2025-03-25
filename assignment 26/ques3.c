//recursive function to print binary of the given decimal number.
#include<stdio.h>
int bin(int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    bin(n);
    return 0;
}

int bin(int n)
{
    if(n<2)
        return printf("%d",n);
    bin(n/2);
    printf("%d",n%2);
}