//recursive function print natural numbers in reverse order.
#include <stdio.h>

void FirstNnaturalNumsrev(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        FirstNnaturalNumsrev(n-1);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    FirstNnaturalNumsrev(n);
    return 0;
}
