//program to swap two int variables without third variable and arithmetic operators.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    a+=b; //adding sum into a using compund assignment operator.
    b-=a;//doing b-a and assigning into b.
    b=-b;//using - unary operator to convert -ve to +ve.such that b is swapped to a.
    a-=b;//now finally a-b and assigning into a.such that a is swapped to b.
    printf("Swapped,a=%d,b=%d",a,b);
    return 0;
}