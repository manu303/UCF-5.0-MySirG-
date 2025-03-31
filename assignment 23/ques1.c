//function to calculate LCM of two numbers.(TSRS)
#include<stdio.h>
int LCM(int num1,int num2);
int main()
{
    int num1,num2,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    result = LCM(num1,num2);
    printf("The LCM of given numbers %d,%d is %d",num1,num2,result);
    return 0;
}

int LCM(int num1,int num2)
{
    int i;
    i = num1>num2?num1:num2;
    for(i;i<=num1*num2;i++){
        if((i%num1==0) && (i%num2==0))
            return i;
    }
}

