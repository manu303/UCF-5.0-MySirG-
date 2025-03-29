//program to calculate HCF of two numbers.
#include<stdio.h>
int main(){
    int num1,num2,min,i;
    printf("Enter any two +ve number: ");
    scanf("%d%d",&num1,&num2);
    min = num1<num2?num1:num2;
    for(i=min;i>0;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            printf("Hcf is %d",i);
            break;
        }
    }
    return 0;
}