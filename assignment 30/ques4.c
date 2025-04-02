//sort array in descending order.
#include <stdio.h>
int main() {
    int a[10],i,temp,round;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(round=1;round<=9;round++)
    {
        for(i=0;i<=9-round;i++)
        {
            if(a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}