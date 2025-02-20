//program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main(){
    int number;
    printf("Enter any integer number : ");
    scanf("%d",&number);
    if(number>0)
        printf("Given number %d is positive",number);
    else
        printf("Given number %d is non-positive",number);
    return 0;
}