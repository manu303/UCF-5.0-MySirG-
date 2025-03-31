#include <stdio.h>
#include<stdlib.h>

void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int adjduplicate(int a[],int n)
{
    int i;
    for(i=0;i<(n-1);i++)
    {
        if(a[i+1] == a[i])
            return a[i+1];
    }
    printf("No adjacent duplicate value present");
    exit(0);
}

int main()
{
    int n,res;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    res = adjduplicate(arr,n);
    printf("The adjacent duplicate value is %d",res);
    return 0;
}