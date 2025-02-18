//program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d",&number);
    printf("The updated variable is:%d",(number/10)*10);
    return 0;
}