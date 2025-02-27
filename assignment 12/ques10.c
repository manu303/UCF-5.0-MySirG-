//program to print table of N.
#include<stdio.h>
int main(){
    int iter=1,N;
    printf("Enter the N: ");
    scanf("%d",&N);
    while(iter<=20){
        printf("%d * %d = %d\n",N,iter,N*iter);
        iter++;
    }
    return 0;
}