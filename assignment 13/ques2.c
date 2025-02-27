//program to calculate sum of N natural numbers.
#include<stdio.h>
int main(){
    int iter=2,sum=0,N;
    printf("Enter the N: ");
    scanf("%d",&N);
    while (iter<=N)
    {
        sum=sum+iter;
        iter=iter+2;
    }
    printf("Sum is %d",sum);
    return 0;
    
}