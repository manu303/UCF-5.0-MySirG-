//calculate simple intrest
#include<stdio.h>
int main(){
    float si,p,r,t;
    printf("Enter principal amount,rate of intrest and time period:");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("Interest is %.1f and total amount after interest is %.1f",si,p+si);
    return 0;
}