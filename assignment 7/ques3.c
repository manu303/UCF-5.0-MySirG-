//program to check whether the given number is even or odd.
#include<stdio.h>
int main(){
    int number;
    printf("Enter any integer number: ");
    scanf("%d",&number);
    if(number%2==0)
        printf("Give number %d is divisible by 2.",number);
    else
        printf("Give number %d is not divisible by 2.",number);
    return 0;
}