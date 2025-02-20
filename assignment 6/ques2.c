//program to take a three digit  number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main(){
    
    int number,lastDigit;
    printf("Enter 3 digit integer number : ");
    scanf("%d",&number);
    lastDigit = number%10;
    number = number/10;
    printf("The result after rotation towards right is %d",lastDigit*100+number);
    return 0;

}