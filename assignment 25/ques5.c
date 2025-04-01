//recursive function to print even natural numbers.
// Online C compiler to run C program online
#include <stdio.h>

void FirstNnaturalNumseven(int n)
{
    if(n>0)
    {
        FirstNnaturalNumseven(n-1);
        printf("%d ",2*n);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    FirstNnaturalNumseven(n);
    return 0;
}