//print first 10 even natural numbers in reverse order.
#include<stdio.h>
int main(){
    int iter=20;
    while(iter>=2){
        printf("%d\n",iter);
        iter = iter - 2;
    }
    return 0;
}