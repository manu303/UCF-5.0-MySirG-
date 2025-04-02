//function to sort an array.
#include<stdio.h>
int sort(int c[],int n);
int input(int b[],int n);
int printarr(int d[],int n);
int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers: ",n);
    input(a,n);
    sort(a,n);
    printf("Sorted array is: ");
    printarr(a,n);
}

int input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
}

int sort(int c[],int n)
{
    int round,i,temp;
    for(round=1;round<=n-1;round++)
    {
        for(i=0;i<=(n-1)-round;i++) 
        {
            if(c[i]>c[i+1])
            {
                temp=c[i];
                c[i]=c[i+1];
                c[i+1]=temp;
            }
        }
    }
}

int printarr(int d[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",d[i]);
}
