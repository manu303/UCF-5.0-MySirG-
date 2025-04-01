//recursive function to print binary of the given decimal number.
#include <stdio.h>

void binary(int n)
{
    if(n>0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    binary(n);
    return 0;
}