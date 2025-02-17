//program to print given number without last digit.
#include<stdio.h>
int main(){
    int number;
    printf("Enter any number: ");
    scanf("%d",&number);
    printf("The number without last digit is %d",number/10);
}