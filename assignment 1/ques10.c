//calculate area of circle input given by user.
#include<stdio.h>
int main(){
    float pi=3.14,radius,area;
    printf("Enter radius of  a circle:");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("The area of circle is:%.2f",area);
    return 0; 
}