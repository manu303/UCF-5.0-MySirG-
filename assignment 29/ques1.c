//calculate sum of numbers
#include <stdio.h>

int main() {
   
    int arr[10],i,sum=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
        sum=sum+arr[i];
    printf("Sum of numbers stored in array is %d",sum);
    return 0;
}