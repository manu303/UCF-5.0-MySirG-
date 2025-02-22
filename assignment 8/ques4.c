//program to check whether a given year is a leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if ((year%4==0 && year%100==0 &&year%400==0) || (year%4==0 && year%100!=0))
        printf("Given year %d is a leap year.",year);
    else
        printf("Given year %d is not a leap year.",year);
    return 0;
}