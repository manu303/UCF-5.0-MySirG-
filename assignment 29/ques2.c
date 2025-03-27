//calculate average using arrays
#include<stdio.h>
int input(int a[],int n);
float avg(int c[],int n);
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n],i;
    float res;
    printf("Enter %d numbers: ",n);
    input(a,n);
    res = avg(a,n);
    printf("The average is %.2f",res);
}

int input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
}

float avg(int c[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+c[i];
    return sum/(n*1.0);
}