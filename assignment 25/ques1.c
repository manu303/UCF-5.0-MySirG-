//recursive function to print N natural numbers.
// Online C compiler to run C program online
#include <stdio.h>

void FirstNnaturalNums(int n)
{
    if(n>0)
    {
        FirstNnaturalNums(n-1);
        printf("%d ",n);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    FirstNnaturalNums(n);
    return 0;
}
