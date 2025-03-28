//function to find greatest number in given array.
#include<stdio.h>
int greatestnum(int b[],int n);
int input(int c[],int n);
int main()
{
    int n,res;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers: ",n);
    input(a,n);
    res = greatestnum(a,n);
    printf("The greatst number in given array is %d",res);
    return 0;
}

int input(int c[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
}

int greatestnum(int b[],int n)
{
    int i,j,big;
    big = b[0]>b[1]?b[0]:b[1];
    for(i=0;i<n;i++)
    {
        big = big>b[i+1]?big:b[i+1];
    }
    return big;
}