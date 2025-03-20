//function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int check(int num,int digit);
int main()
{
    int num,digit,result;
    printf("Enter number and digit: ");
    scanf("%d%d",&num,&digit);
    result = check(num,digit);
    if(result)
        printf("The digit %d is present in %d",digit,num);
    else
        printf("The digit %d is not present in %d",digit,num);
    return 0;
}

int check(int num,int digit)
{
    for(num;num>=0;num=num/10)
    {
        if((num%10)==digit)
            return 1;
    }
    return 0;
}