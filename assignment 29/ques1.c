//calculate sum of numbers
#include<stdio.h>
int input(int b[],int n);
int sum(int c[],int n);
int main()
{
    int n,res;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers: ",n);
    input(a,n);
    res = sum(a,n);
    printf("The sum is %d",res);
    return 0;
}

int input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
}

int sum(int c[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s=s+c[i];
    return s;
}