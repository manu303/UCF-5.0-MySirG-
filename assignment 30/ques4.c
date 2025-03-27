//sort array in descending order.
#include<stdio.h>
int input(int b[],int n);
int sort(int c[],int n);
int printarr(int d[],int n);
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d number:",n);
    input(a,n);
    sort(a,n);
    printf("Sorted array is:");
    printarr(a,n);
    return 0;
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
        for(j=i+1;j<n;j++)
        {
            if(c[i] > c[j])
            {
                c[i] = c[i];
                c[j] = c[j];
            }
            else
            {
                c[i] = c[i] + c[j];
                c[j] = c[i] - c[j];
                c[i] = c[i] - c[j];
                
                // (or) c[i] = c[i] + c[j] - (c[j]=c[i]);
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