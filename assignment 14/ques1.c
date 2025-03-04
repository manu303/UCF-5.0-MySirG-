//calculate factorial of a number.
#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter a number to calculate factorial:");
    scanf("%d",&num);
    //using while loop

    // while(num>=1){
    //     fact = fact*num;
    //     num--;
    // }
    // printf("The factorial of given number is: %d",fact);
    // return 0;

    //using for loop
    for(num;num>=1;num--){
        fact = fact*num;
    }
    printf("The factorial of given number is: %d",fact);
}