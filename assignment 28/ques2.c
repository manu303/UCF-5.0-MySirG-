//recursive function to print hcf of two given numbers
#include <stdio.h>
int HCF(int a,int b)
{
    if(b>0)
    {
        return HCF(b,a%b);
    }
    return a;
}
int main() {
    int a,b,res;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    res = HCF(a,b);
    printf("The HCF of %d and %d is %d",a,b,res);
    return 0;
}
