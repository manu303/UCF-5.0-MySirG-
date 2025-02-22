//program to check whether a given number is a three digit number or not.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any integer: ");
    scanf("%d",&num);
    if ((num>99 && num<=999) || (num<-99 && num>=-999))
        printf("Given number %d is a 3 three digit number:",num);
    else
        printf("Given number %d is not a 3 three digit number",num);
    
    return 0;
}