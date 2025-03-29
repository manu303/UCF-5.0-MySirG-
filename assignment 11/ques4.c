//print first ten odd natural numbers.
#include<stdio.h>
int main(){
    int iter=1;
    while(iter<=10){
        printf("%d\n",2*iter-1);
        iter++;
    }
    return 0;
}