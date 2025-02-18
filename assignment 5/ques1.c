//program to input a three digit number and display the sum of digits.
#include<stdio.h>
int main(){
    
    int number,sum=0;
    printf("Enter any three digit number:");
    scanf("%d",&number);
    sum = sum + number%10;
    number = number/10;
    sum = sum + number%10;
    number = number/10;
    sum = sum + number%10;
    number = number/10;
    printf("Sum of digits of a number is %d",sum);

    return 0;
}