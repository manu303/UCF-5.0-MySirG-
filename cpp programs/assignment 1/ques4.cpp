//function to calculate LCM of two numbers.
#include<stdio.h>
int lcm(int a,int b)
{
    int i;
    for(i=a<b?a:b;i<a*b;i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
    return a*b;
}
int main()
{
    int a,b,res;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    res = lcm(a,b);
    printf("Lcm of %d and %d is %d",a,b,res);
    return 0;
}