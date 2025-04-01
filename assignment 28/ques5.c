//program to print power of any given number.
#include <stdio.h>

double power(double x,double y)
{
    if(y==0)
        return 1;
    else if(y>0)
        return x*power(x,y-1);
    else 
        return 1/x*power(x,y+1);
}   


int main() {
    double x,y;
    printf("Enter base and exponent:");
    scanf("%lf%lf",&x,&y);
    printf("power of given number is %.1lf",power(x,y));
    return 0;
}