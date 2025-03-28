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
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++) //j=0(descending order because we are going back and checking that number) //j=i+1(ascending order because we are not going back and checking that number.)
        {
            if(c[i]>c[j])
            {
                c[i] = c[i] + c[j] - (c[j] = c[i]);
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
