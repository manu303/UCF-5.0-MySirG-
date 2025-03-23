//function to print PASCAL Triangle.(TSRN)
int fact(int n);
int comb(int N,int r);
void pascal(int n);
#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows: ");
    scanf("%d",&n);
    pascal(n);
    return 0;
}
//factorial function
int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
//combination function Ncr
int comb(int N,int r)
{
    return fact(N)/(fact(N-r)*fact(r));
}
//PASCAL traingle function
void pascal(int n)
{
    int i,j,flag,r;
    for(i=1;i<=n;i++)
    {
        flag=1;
        r=0;
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i && flag)
            {
                printf("%d ",comb(i-1,r));
                flag=0;
                r++;
            }
            else
            {
                printf("  ");
                flag=1;
            }
        }
        printf("\n");
    }
}



