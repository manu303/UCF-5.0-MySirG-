//calculate the no of combinations one can make from n items and r selected at a time(TSRS)
#include<stdio.h>
int comb(int n,int r);
int main()
{
    int n,r,result;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    result = comb(n,r);
    printf("The no of combinations are %d",result);
    return 0;
}

int comb(int n,int r)
{
    int prod1=1,prod2=1,prod3=1;
    if(n>=r)
    {
        //for n
        for(int i=1;i<=n;i++)
            prod1=prod1*i;
        //for r
        for(int j=1;j<=r;j++)
            prod2=prod2*j;
        //for n-r
        for(int k=1;k<=(n-r);k++)
            prod3=prod3*k;
        return (prod1)/(prod2*prod3);
    }
    else
        return 0;
}