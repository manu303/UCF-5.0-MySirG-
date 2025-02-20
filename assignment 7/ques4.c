//program to check whether given number is even or odd number without % operator.
#include<stdio.h>
int main(){
    int number;
    printf("Enter any integer number : ");
    scanf("%d",&number);
    if((number/2)*2 == number)
    {
        printf("given number %d is Even number",number);
    }
    else
    {
        printf("given number %d is Odd number",number);
    }
    return 0;
}