#include <stdio.h>
int input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int printarr(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}

int main()
{
    int n,i,j;
    printf("Enter size of an array:");
    scanf("%d",&n);
    printf("Enter two indeces that you want to swap:");
    scanf("%d%d",&i,&j);
    int a[n];
    printf("Enter %d values:",n);
    input(a,n);
    a[i] = a[i] + a[j] -(a[j]=a[i]);
    printarr(a,n);
    return 0;
}
