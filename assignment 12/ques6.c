//program to print first n natural even numbers.
#include<stdio.h>
int main(){
    int iter=1,N;
    printf("Enter the N: ");
    scanf("%d",&N);
    while(iter<=N){
        printf("%d\n",2*iter);
        iter++;
    }
    return 0;
}