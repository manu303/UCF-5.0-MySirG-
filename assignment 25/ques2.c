//recursive function print natural numbers in reverse order.
#include<stdio.h>
int naturalnumrev(int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    naturalnumrev(n);
    return 0;
}

int naturalnumrev(int n)
{
    if(n==1)
        return printf("%d ",1);
    printf("%d ",n);
    naturalnumrev(n-1);
}
