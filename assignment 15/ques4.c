//program to calculate HCF of two numbers.
#include<stdio.h>
int main(){
    int num1,num2,diff,i;
    printf("Enter any two +ve number: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        diff=num1-num2;
    else
        diff=num2-num1;
    if(diff==0)
        printf("%d",num1); //or num2
    else if((num1%diff==0)&&(num2%diff==0))
        printf("HCF is %d",diff);
    else{
        i=diff/2;
        while (i>0)
        {
            if((num1%i==0)&&(num2%i==0)){
                printf("HCF is %d",i);
                break;
            }
            i--;
        } 
    }
    return 0;
}