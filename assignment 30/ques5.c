// copy the elements of one array into another array.
#include <stdio.h>
int main() {
    int a[10],b[10],i;
    printf("Enter 10 number:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);   
    for(i=0;i<10;i++)
        b[i] = a[i];
    for(i=0;i<10;i++)
        printf("%d ",b[i]); 
    return 0;
}


