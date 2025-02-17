//program to print last digit of a number.
#include<stdio.h>
int main(){
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    printf("The last digit is %d",number%10);
}