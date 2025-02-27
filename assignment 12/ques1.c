//program to print MysirG N times.
#include<stdio.h>
int main(){
    int iter=1,N;
    printf("Enter number of times N: ");
    scanf("%d",&N);
    while(iter<=N){
        printf("MySirG\n");
        iter++;
    }
    return 0;
}