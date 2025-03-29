//program to calculate sum of N even natural numbers.
#include<stdio.h>
int main(){
    int iter=1,sum=0,N;
    printf("Enter the N: ");
    scanf("%d",&N);
    while (iter<=N)
    {
        sum=sum+2*iter;
        iter++;
    }
    printf("Sum is %d",sum);
    return 0;
    
}