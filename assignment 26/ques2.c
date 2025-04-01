//recursive function to print squares of first n natural numbers.
#include <stdio.h>

void FirstNnaturalNumsSquares(int n)
{
    if(n>0)
    {
        FirstNnaturalNumsSquares(n-1);
        printf("%d ",n*n);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    FirstNnaturalNumsSquares(n);
    return 0;
}