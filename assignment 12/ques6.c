//program to print first n natural even numbers.
#include<stdio.h>
int main(){
    int iter=2,N;
    printf("Enter the N: ");
    scanf("%d",&N);
    while(iter<=N){
        printf("%d\n",iter);
        iter=iter+2;
    }
    return 0;
}