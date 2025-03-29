//program to calculate sum of  N odd natural number.
#include<stdio.h>
int main(){
    int iter=1,sum=0,N;
    printf("Enter the N: ");
    scanf("%d",&N);
    while (iter<=N)
    {
        sum=sum+2*iter-1;
        iter++;
    }
    printf("Sum is %d",sum);
    return 0;
    
}