//recursive function to print first n terms of fibonacci series
#include<stdio.h>
int fibb(int a,int b,int c,int n);
int main()
{
    int a,b,c,n;
    a=-1,b=1,c=a+b;
    printf("Enter n: ");
    scanf("%d",&n);
    fibb(a,b,c,n);
    return 0;
}

int fibb(int a,int b,int c,int n)
{
    if(n==1)
        return printf("%d ",a+b);
    c=a+b;
    printf("%d ",c);
    fibb(b,c,a+b,n-1);
}