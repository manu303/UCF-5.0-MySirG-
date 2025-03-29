//check given number is prime or not.
#include<stdio.h>
int main(){
    int num,count=0,i;
    printf("Enter any number greater than 1: ");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if((num%i)==0)
            break;     
    }
    if(i==num)
        printf("Prime Number");
    else
        printf("Not a prime number");
    return 0;
    
}