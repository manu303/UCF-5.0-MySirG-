//function to calculate HCF of two numbers(TSRS)
#include<stdio.h>
int HCF(int num1,int num2);
int main()
{
    int num1,num2,result;
    printf("enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    result = HCF(num1,num2);
    printf("The HCF of given numbers %d,%d is %d",num1,num2,result);
    return 0;
}

int HCF(int num1,int num2)
{
    int i;
    i=num1<num2?num1:num2;
    for(i;i>=1;i--)
    {
        if((num1%i==0) && (num2%i==0))
            return i;
    }
}