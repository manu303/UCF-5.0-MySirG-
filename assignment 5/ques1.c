//program to input a three digit number and display the sum of digits.
#include<stdio.h>
int main(){
    
    int number,sum=0;
    printf("Enter any three digit number:");
    scanf("%d",&number);
    printf("Sum of digits of a number is %d",(number/100)+(number/10)%(10)+(number%10));
    return 0;
}