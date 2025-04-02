//find greatest element in array
#include <stdio.h>

int main() {
   
    int arr[10],i,big;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    big = arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>big)
            big = arr[i];
    }
    printf("Greatest number stored in array is %d\n",big);
    return 0;
}