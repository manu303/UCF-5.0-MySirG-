//recursive function to print first n odd natural numbers.
#include <stdio.h>

void FirstNnaturalNumsoddrev(int n)
{
    if(n>0)
    {
        FirstNnaturalNumsoddrev(n-1);
        printf("%d ",2*n-1);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    FirstNnaturalNumsoddrev(n);
    return 0;
}