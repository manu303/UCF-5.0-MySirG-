//program to swap values of two int variables in single line arithmetic expression.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter any two integers: ");
    scanf("%d%d",&a,&b);
    a = a+b-(b=a); // or b = a+b -(a=b); first we sum both variables now swap b to a and subtract from sum..just think from total how much we need to subtract such that  b comes into a.
    printf("Swapped,a=%d,b=%d",a,b);
    return 0;
}