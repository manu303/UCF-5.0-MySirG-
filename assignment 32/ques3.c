//print unique elemnts in an array.
#include <stdio.h>
void unique(int a[],int n)
{
    int i,unq=a[0];
    printf("%d ",unq);
    for(i=1;i<n;i++)
    {
        if(a[i] == unq)
            continue;
        else
            printf("%d ",a[i]);
            unq=a[i];
    }
}

int main() {
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    unique(a,n);
    return 0;
}