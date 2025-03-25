//recursive function to print octal of a given decimal number
#include<stdio.h>
int oct(int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    oct(n);
    return 0;
}

int oct(int n)
{
    if(n<8)
        return printf("%d",n);
    oct(n/8);
    printf("%d",n%8);
}