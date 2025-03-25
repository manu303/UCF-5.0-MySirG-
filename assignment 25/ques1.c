//recursive function to print N natural numbers.
#include<stdio.h>
int naturalnum(int n);
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    naturalnum(n);
    return 0;
}

int naturalnum(int n)
{
    if(n==1)
        return printf("%d ",1);
    naturalnum(n-1);
    printf("%d ",n);
}
