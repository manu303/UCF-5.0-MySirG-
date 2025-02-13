//calculate volume of a cuboid.
#include<stdio.h>
int main(){
    float l,b,h,v;
    printf("Enter length,breadth and height:");
    scanf("%f%f%f",&l,&b,&h);
    v=l*b*h;
    printf("Volume of cuboid is:%.1f cubic units.",v);
    return 0;
}