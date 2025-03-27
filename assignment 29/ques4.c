//find greatest element in array
#include<stdio.h>
int input(int b[],int n);
int greatest(int c[],int n);
int main()
{
    int n,res;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    res = greatest(arr,n);
    printf("The greatest number of array is %d",res);
}

int input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",&b[i]);
    }     
}

int greatest(int c[],int n)
{
    int i,big;
    big = c[0]>c[1]?c[0]:c[1];
    for(i=0;i<n;i++)
        big = big>c[i]?big:c[i];
    return big;
}