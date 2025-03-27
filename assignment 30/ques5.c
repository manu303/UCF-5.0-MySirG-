// copy the elements of one array into another array.
#include <stdio.h>
int input(int b[],int n);
int copy(int b[],int c[],int n);
int printarr(int d[],int n);
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d number:",n);
    input(a,n);
    int b[n];
    copy(a,b,n); //original,copy,n
    printf("original array:");
    printarr(a,n);
    printf("copied   array:");
    printarr(b,n);
    return 0;
}

int input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]); 
}

int copy(int b[],int c[],int n)
{
    int i;
    for(i=0;i<n;i++)
        c[i] = b[i];
}

int printarr(int d[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",d[i]);
    printf("\n");
}