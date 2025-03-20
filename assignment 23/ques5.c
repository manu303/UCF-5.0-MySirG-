//function to find the first n prime numbers (TSRN)
#include<stdio.h>
void nprimes(int n);
int main()
{
    int n,result;
    printf("Enter number: ");
    scanf("%d",&n);
    nprimes(n);
    return 0;
}

void nprimes(int n)
{
    int i,j;
    for(i=2;i<=n;i++){
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }
    
}