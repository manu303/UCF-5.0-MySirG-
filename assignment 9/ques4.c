//program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any integer: ");
    scanf("%d",&num);
    if(num%6==0)
        printf("Given number %d is divisible by both 2 and 3.",num);
    else
        printf("Given number %d is not divisible by both 2 and 3.",num);
    return 0;
}