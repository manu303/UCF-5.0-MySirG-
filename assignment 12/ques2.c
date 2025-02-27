//program to print first N natural numbers.
#include<stdio.h>
int main(){
    int iter=1,N;
    printf("Enter the N:");
    scanf("%d",&N);
    while(iter<=N){
        printf("%d\n",iter);
        iter++;
    }
    return 0;

}