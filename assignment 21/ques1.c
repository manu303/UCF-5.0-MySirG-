//function to calculate area of circle.(take something return something type)
#include<stdio.h>
float area(float rad); //function declaration
int main(){
    float rad,result;
    printf("Enter radius: ");
    scanf("%f",&rad);
    result = area(rad); //function call
    printf("The area of circle is %.2f",result);
    return 0;
}
//function definition
float area(float rad){
    return 3.14159*rad*rad;
}