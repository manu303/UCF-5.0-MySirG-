//program to print first N odd natural numbers.
#include<stdio.h>
int main(){
    int N,iter=1;
    printf("Enter the N: ");
    scanf("%d",&N);
    while(iter<=N){
        printf("%d\n",2*iter-1);
        iter++;
    }
    return 0;
}