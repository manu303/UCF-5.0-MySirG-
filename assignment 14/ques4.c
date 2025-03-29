//program to calculate LCM of two numbers.
#include<stdio.h>
int main(){
    int num1,num2,i,max;
    printf("Enter any two +ve numbers: ");
    scanf("%d%d",&num1,&num2);
    max = num1>num2?num1:num2;
    for(i=max;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
            break;    
    }
    printf("LCM is %d",i);
    return 0;
} 