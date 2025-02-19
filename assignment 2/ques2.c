//calculate circumference of a circle
#include<stdio.h>
int main(){
    float circumference;
    int radius;
    printf("Enter radius of a circle:");
    scanf("%d",&radius);
    circumference=2*3.14*radius;
    printf("Circumference of a circle is:%0.2f",circumference);
    return 0;
}