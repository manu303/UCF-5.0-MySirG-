//calculate area of circle input given by user.
#include<stdio.h>
int main(){
    int radius;
    float area;
    printf("Enter radius of  a circle:");
    scanf("%d",&radius);
    area = 3.14*radius*radius;
    printf("The area of circle is:%.2f",area);
    return 0; 
}