//program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
int main(){
    int number;
    printf("Enter any integer number: ");
    scanf("%d",&number);
    if (number & 1 == 1)
    {
        printf("given number %d is Odd number",number);
    }
    else
    {
        printf("given number %d is Even number",number);
    }
    return 0;
}