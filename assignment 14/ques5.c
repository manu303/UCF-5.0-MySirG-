//program to print given number in reverse.
#include<stdio.h>
int main(){

    int num,result=0;
    printf("Enter any +ve number: ");
    scanf("%d",&num);
    while (num)
    {
        result=(result*10) + (num%10);
        num=num/10;
    }
    printf("The reversed number is :%d",result);
    return 0;
}