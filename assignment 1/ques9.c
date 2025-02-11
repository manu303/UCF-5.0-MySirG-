//calculate area of rectangle input given by user.
#include<stdio.h>
int main(){
    float length,width,area;
    printf("Enter length and width:");
    scanf("%f%f",&length,&width);
    area = length*width;
    printf("Area of rectangle is : %.2f",area);
    return 0;
}