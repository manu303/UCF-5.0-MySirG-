//print first ten odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int iter=10;
    while(iter>=1){
        printf("%d\n",iter*2-1);
        iter--;
    }
    return 0;
}