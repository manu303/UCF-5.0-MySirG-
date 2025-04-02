//calculate sum of all even numbers and sum of all odd numbers.
#include <stdio.h>

int main() {
   
    int arr[10],i,even=0,odd=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
        if(arr[i]%2==0)
            even=even+arr[i];
        else
            odd=odd+arr[i];
    printf("sum of even numbers stored in array is %d\n",even);
    printf("sum of odd numbers stored in array is %d\n",odd);
    return 0;
}