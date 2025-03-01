//program to find the greatest among three given numbers.print number once if greatest number appears 2 or 3 times.
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter any 3 integers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num3))
        printf("The greatest among 3 numbers is:%d",num1);
    else if(num2>num3)
        printf("The greatest among 3 numbers is:%d",num2);
    else
        printf("The greatest among 3 numbers is:%d",num3);
    return 0;
}