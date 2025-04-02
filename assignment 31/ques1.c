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
    printf("The greatest number in given array is %d",res);
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
    int i,big;
    big = b[0];
    for(i=1;i<=n;i++)
    {
        if(b[i]>big)
            big = b[i];
    }
    return big;
}