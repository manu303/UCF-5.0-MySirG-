//recursive function to print odd numbers in reverse order.
#include <stdio.h>

void FirstNnaturalNumsoddrev(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        FirstNnaturalNumsoddrev(n-1);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    FirstNnaturalNumsoddrev(n);
    return 0;
}