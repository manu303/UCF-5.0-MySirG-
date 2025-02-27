//program to calculate sum of natural numbers.
#include<stdio.h>
int main(){
    int iter=1,N,sum=0;
    printf("Enter the N: ");
    scanf("%d",&N);
    while(iter<=N){
        sum = sum + iter;
        iter++;
    }
    printf("The sum is %d",sum);
    return 0;
}