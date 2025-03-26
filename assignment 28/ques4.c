//count the number of digits of a given number using recursion
#include<stdio.h>
int countdigits(int n,int count);
int main()
{
    int n,res,count=1;
    printf("Enter num: ");
    scanf("%d",&n);
    if(n<0)
        n = -(n);
    res=countdigits(n,count);
    printf("no of digits are %d ",res);
    return 0;
}

int countdigits(int n,int count)
{
    
    if(n<10)
        return count;
    countdigits(n/10,count+1);
}