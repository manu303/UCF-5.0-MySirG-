//merge two arrays of same size sorted in descending order.
// Online C compiler to run C program online
#include <stdio.h>

void sort(int finalarr[],int n)
{
    int round,j,temp;
    for(round=1;round<=n;round++)
    {
        for(j=0;j<=(n-1)-round;j++)
        {
            if(finalarr[j]<finalarr[j+1])
            {
                temp=finalarr[j];
                finalarr[j] = finalarr[j+1];
                finalarr[j+1] = temp;
            }
        }
    }
}
void mergearrays(int arr1[],int arr2[],int n)
{
    int finalarr[2*n];
    for(int i=0;i<2*n;i++)
    {
        
        for(int j=0;j<n;j++)
            finalarr[j] = arr1[j];
        
        for(int k=n;k<2*n;k++)
            finalarr[k] = arr2[k%n];
    }
    sort(finalarr,2*n);
    for(int i = 0;i<2*n;i++)
        printf("%d ",finalarr[i]);
}

int main() {
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    printf("Enter %d values for 1st array:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    printf("Enter %d values for 2nd array:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr2[i]);
    mergearrays(arr1,arr2,n);
    return 0;
}