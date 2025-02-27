//program to print first N odd natural numbers.
#include<stdio.h>
int main(){
    int N;
    printf("Enter the N: ");
    scanf("%d",&N);
    if (N%2==0){
        N=N-1;
        while (N>=1)
        {
            printf("%d\n",N);
            N = N-2;
        }  
    }
    else{
        while (N>=1)
        {
            printf("%d\n",N);
            N = N-2;
        }  
    }
    return 0;
}