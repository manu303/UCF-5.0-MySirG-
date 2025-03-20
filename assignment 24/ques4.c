//function to print all armstrong numbers between two given numbers (TSRN)
#include<stdio.h>
void armstrong(int start,int end);
int main()
{
    int start,end;
    printf("Enter starting and ending numbers: ");
    scanf("%d%d",&start,&end);
    armstrong(start,end);
    return 0;
}

void armstrong(int start,int end)
{
    int i,count,j,k,a,b,sum;
    for(i=start+1;i<=end-1;i++)
    {
        a=i,b=i,sum=0,count=0;
        while(a)
        {
            count++;
            a=a/10;
        }
        for(j=1;j<=count;j++)
        {
            int prod=1;
            for(k=1;k<=count;k++)
                prod= prod*(b%10);
            sum=sum+prod;
            b=b/10;
        }
        if(sum==i)
            printf("%d ",i);
    }
}