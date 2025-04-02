//find smallest element in array
#include <stdio.h>

int main() {
   
    int arr[10],i,small;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    small = arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]<small)
            small = arr[i];
    }
    printf("Smallest number stored in array is %d\n",small);
    return 0;
}