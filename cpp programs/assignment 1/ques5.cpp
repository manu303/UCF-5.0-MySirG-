//function to check whether a given number is a prime number or not.
#include<stdio.h>
int prime(int num)
{
    int i;
    if (num <= 1) 
    {
        return 0; 
    }
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            break;
    }
    if(i==num)
        return 1;
    else
        return 0;
}
int main()
{
    int num,res;
    printf("Enter a number:");
    scanf("%d",&num);
    res = prime(num);
    if(res)
        printf("Prime number");
    else
        printf("Not a prime number");
    return 0;
}