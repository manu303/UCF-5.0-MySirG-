//print first ten odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int iter=19;
    while(iter>=1){
        printf("%d\n",iter);
        iter = iter - 2;
    }
    return 0;
}