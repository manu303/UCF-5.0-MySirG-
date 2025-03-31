//calculate the no of arrangements one can make from n items and r selected at a time(TSRS)
#include<stdio.h>
int arrange(int n,int r);
int fact(int n);
int main()
{
    int n,r,result;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    result = arrange(n,r);
    printf("The no of arrangements are %d",result);
    return 0;
}

int arrange(int n,int r)
{
    return fact(n)/fact(n-r); 
}

int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
        fact = fact * i;
    return fact;
}