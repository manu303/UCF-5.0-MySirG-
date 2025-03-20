//calculate the no of arrangements one can make from n items and r selected at a time(TSRS)
#include<stdio.h>
int arrange(int n,int r);
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
    int prod1=1,prod2=1;
    if(n>=r)
    {
        //for n
        for(int i=1;i<=n;i++)
            prod1=prod1*i;
        //for n-r
        for(int k=1;k<=(n-r);k++)
            prod2=prod2*k;

        return (prod1)/(prod2);
    }
    else
        return 0; 
}