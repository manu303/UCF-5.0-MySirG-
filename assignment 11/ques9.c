//print cubes of first 10 natural numbers.
#include<stdio.h>
int main(){
    int iter=1;
    while(iter<=10){
        printf("%d\n",iter*iter*iter);
        iter++;
    }
    return 0;
}