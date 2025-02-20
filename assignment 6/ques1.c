//assume price of 1 usd is inr 84.23 . write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main(){
    int rupees;
    printf("Enter amount in rupees: ");
    scanf("%d",&rupees);
    printf("Amount in dollars is %0.2f",rupees/84.23);
    return 0;
}