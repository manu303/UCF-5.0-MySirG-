//program to check whether the given number is even or odd.
#include<stdio.h>
int main(){
    int number;
    printf("Enter any integer number: ");
    scanf("%d",&number);
    if(number%2==0)
        printf("Give number %d is even.",number);
    else
        printf("Give number %d is odd.",number);
    return 0;
}