//calculate circumference of a circle
#include<stdio.h>
int main(){
    float pi=3.14159,radius,circumference;
    printf("Enter radius of a circle:");
    scanf("%f",&radius);
    circumference=2*pi*radius;
    printf("Circumference of a circle is:%.2f",circumference);
    return 0;
}