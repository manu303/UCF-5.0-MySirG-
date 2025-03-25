//recursive function to print reverse of a given number
#include<stdio.h>
int reverse(int n);
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}

int reverse(int n)
{
    if(n<10)
        return printf("%d",n);
    printf("%d",n%10);
    reverse(n/10);
}