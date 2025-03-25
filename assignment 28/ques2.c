//recursive function to print hcf of two given numbers
#include<stdio.h>
int HCF(int a,int b,int c);
int main()
{
    int a,b,c,res;
    printf("Enter num1 and num2: ");
    scanf("%d%d",&a,&b);
    c=a<b?a:b;
    res = HCF(a,b,c);
    printf("The HCF is %d",res);
    return 0;
}

int HCF(int a,int b,int c)
{

    if(a==0)
        return b;
    else if(b==0)
        return a;
    else if(a%c==0 && b%c==0)
        return c;
    else
        return HCF(a,b,c-1);
}
