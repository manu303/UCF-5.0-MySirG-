//find smallest element in array
#include<stdio.h>
int input(int b[],int n);
int smallest(int c[],int n);
int main()
{
    int n,res;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    res = smallest(arr,n);
    printf("The smallest number of array is %d",res);
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

int smallest(int c[],int n)
{
    int i,small;
    small = c[0]<c[1]?c[0]:c[1];
    for(i=0;i<n;i++)
        small = small<c[i]?small:c[i];
    return small;
}