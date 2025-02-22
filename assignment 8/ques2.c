//program to print greater between two numbers.print one number if both are the same.
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter any two numbers :");
    scanf("%d%d",&num1,&num2);
    if((num1>num2) || (num1==num2))
        printf("%d",num1);
    else
        printf("%d",num2);
    return 0;
}