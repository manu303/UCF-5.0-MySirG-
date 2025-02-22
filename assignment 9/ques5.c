//program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any integer: ");
    scanf("%d",&num);
    if(num%7==0 || num%3==0)
        printf("The given number %d is divisible by 7 or 3.",num);
    else
        printf("The given number %d is neither divisible by 7 nor by 3.",num);
    return 0;
}