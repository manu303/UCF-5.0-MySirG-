//program to calculate sum of cubes of first  N natural numbers.
#include<stdio.h>
int main(){
    int iter=1,sum=0,N;
    printf("Enter the N: ");
    scanf("%d",&N);
    while (iter<=N)
    {
        sum = sum+(iter*iter*iter);
        iter++;
    }
    printf("Sum is %d",sum);
    return 0;
    
}