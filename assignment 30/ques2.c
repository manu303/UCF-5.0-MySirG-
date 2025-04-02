//print second largest element in array.
#include <stdio.h>
int main() {
    int a[10],i,temp,round;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(round=1;round<=2;round++)
    {
        for(i=0;i<=9-round;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("Second largest value in an array is %d",a[8]);
    return 0;
}