//calculate average using arrays
#include <stdio.h>

int main() {
   
    int arr[10],i,sum=0;
    float avg;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
        sum=sum+arr[i];
    avg=sum/10.0;
    printf("Average of numbers stored in array is %.1f",avg);
    return 0;
}