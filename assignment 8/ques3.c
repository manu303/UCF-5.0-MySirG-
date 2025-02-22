//program to check whether roots of a given quadratic equation are real&distinct,real&equal or imaginary roots.
#include<stdio.h>
int main(){
    int a,b,c,discriminant;
    printf("Enter coefficient of x^2,x and constant term(a not equal to 0): ");
    scanf("%d%d%d",&a,&b,&c);
    discriminant = (b*b)-(4*a*c);
    if(discriminant>0)
        printf("Given roots %d,%d,%d are real and distinct.",a,b,c);
    else if(discriminant == 0)
        printf("Given roots %d,%d,%d are real and equal.",a,b,c);
    else
        printf("Given roots %d,%d,%d are imaginary roots.",a,b,c);
    return 0;
}