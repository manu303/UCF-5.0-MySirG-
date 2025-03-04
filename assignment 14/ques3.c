//check given number is prime or not.
#include<stdio.h>
int main(){
    int num,count=0,i=2;
    printf("Enter any number greater than 1: ");
    scanf("%d",&num);
    while(i<=num/2){
        if(num%i==0){
            count++;
        }
        i++;
    }

    if (count>0)
        printf("Not a prime number.");
    else
        printf("Prime number.");

    return 0;
    
}