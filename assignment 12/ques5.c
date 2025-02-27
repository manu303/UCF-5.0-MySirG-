//program to print first N odd natural numbers.
#include<stdio.h>
int main(){
    int N,iter=1;
    printf("Enter the N: ");
    scanf("%d",&N);
    while(iter<=N){
        printf("%d\n",iter);
        iter=iter+2;
    }
    return 0;
}