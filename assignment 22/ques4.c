//function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int check(int num,int digit);
int main()
{
    int num,digit,result;
    printf("Enter number and digit: ");
    scanf("%d%d",&num,&digit);
    if(num<0)
        num = -(num);
    result = check(num,digit);
    if(result)
        printf("present");
    else
        printf("Not present");
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