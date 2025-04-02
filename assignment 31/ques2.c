//function to find smallest number in an array
#include<stdio.h>
int input(int b[],int n);
int smallestnum(int c[],int n);
int main()
{
    int n,res;
    printf("enter size of an array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers: ",n);
    input(a,n);
    res = smallestnum(a,n);
    printf("The smallest element in a given array is %d",res);
}

int input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
}

int smallestnum(int c[],int n)
{
    int i,small;
    small = c[0];
    for(i=1;i<n;i++)
    {
        if(c[i]<small)
            small = c[i];
    } 
    return small;
}