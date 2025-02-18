//program to input a number from the user and also a digit .append a digit in the number and print the resulting number.
#include<stdio.h>
int main(){
    int number,digit;
    printf("Enter a number and a digit: ");
    scanf("%d%d",&number,&digit);
    printf("The appended value is : %d",(number*10)+digit);
    return 0;
}