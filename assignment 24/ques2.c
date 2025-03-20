//function to print N terms of fibonacci numbers(TSRN)
#include<stdio.h>
void fibb(int n);
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    fibb(n);
    return 0;
}

void fibb(int n)
{
    int a=-1,b=1,i,c;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
