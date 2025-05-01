//program to find factorial.
#include<stdio.h>
int main()
{
    int num,fact=1,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=num;i>1;i--)
    {
        fact = fact * i;
    }
    if(num<0)
        printf("Enter positive number.");
    else
        printf("factorial of %d is %d",num,fact);
    return 0;
}