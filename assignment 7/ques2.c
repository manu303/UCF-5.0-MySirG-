//program to check whether the given number is divisible by 5 or not.
#include<stdio.h>
int main(){
    int number;
    printf("Enter any integer number: ");
    scanf("%d",&number);
    if(number%5==0)
        printf("Give number %d is divisible by 5.",number);
    else
        printf("Give number %d is not divisible by 5.",number);
    return 0;
}
