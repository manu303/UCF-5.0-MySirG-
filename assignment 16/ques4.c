//program to check whether a given number is an armstrong or not.
#include<stdio.h>
int main(){
    int num,sum=0,i=1,count=1,a,b,digits;
    printf("Enter any number: ");
    scanf("%d",&num);
    a=num;
    b=num;
    while(a/10>0){
        count++;
        a=a/10;
    }
    
    while (i<=count)
    {
        int prod=1;
        digits=count;
        while(digits>0){
            prod=prod*(num%10);
            digits--;
        }
        sum=sum+prod;
        num=num/10;
        i++;
    }
    if(sum==b)
        printf("Given number %d is armstrong number",b);
    else
        printf("Given number %d is not armstrong number",b);
    return 0; 
}