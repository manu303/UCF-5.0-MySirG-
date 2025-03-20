//function to check whether a given a number is prime or not (TSRS)
#include<stdio.h>
int prime(int num);
int main()
{
    int num,result;
    printf("Enter number: ");
    scanf("%d",&num);
    result = prime(num);
    if(result)
        printf("The given number %d is prime",num);
    else
        printf("The given number %d is not prime",num);
    return 0;
}

int prime(int num)
{
    int i;
    for(i=2;i<=num;i++){
        if(num%i==0)
            break;
    }
    if(i==num)
        return 1;
    else
        return 0;
}