//program to print first N natural even numbers in reverse order.
#include<stdio.h>
int main(){
    int N,i;
    printf("Enter the N: ");
    scanf("%d",&N);
    i=N;
    while(i>0)
    {
        printf("%d ",2*i);
        i--;
    }
    return 0;
    
}