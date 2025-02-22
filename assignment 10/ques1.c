//program to check whether the given program is positive,negative or zero.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any integer: ");
    scanf("%d",&num);
    if (num>0)
        printf("Given number %d is positive.",num);
    else if(num<0)
        printf("Given number %d is negative.",num);
    else
        printf("Given number %d is zero.",num);
    return 0;
}