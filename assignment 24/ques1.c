//function to find the prime numbers between two numbers. (TSRN)
#include<stdio.h>
void nprimes(int start,int end);
int main()
{
    int start,end,result;
    printf("Enter starting and ending number: ");
    scanf("%d%d",&start,&end);
    nprimes(start,end);
    return 0;
}

void nprimes(int start,int end)
{
    int i,j;
    for(i=start;i<end;i++){
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }
    
}