//program to print power of any given number.
#include<stdio.h>
#include<stdlib.h>
int powofnum(int base,int pow);
int main()
{
    int base,pow,res;
    printf("Enter base number and power: ");
    scanf("%d%d",&base,&pow);
    res = powofnum(base,pow);
    printf("The result is %d",res);
    return 0;
}

int powofnum(int base,int pow)
{
    if(pow==0 && base==0)
    {
        printf("undefined");
        exit(0);
    }
    else if(pow==0)
        return 1;
    else if(pow==1)
        return base;
    else
        return base * powofnum(base,pow-1);
}