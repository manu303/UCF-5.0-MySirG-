//count the number of digits of a given number using recursion
#include <stdio.h>

int countdig(int n)
{
    if(n>0)
        return 1+countdig(n/10);
    
}   

int main() {
    int n,res;
    printf("Enter n:");
    scanf("%d",&n);
    if(n<0)
        n = -(n);
    res = countdig(n);
    printf("No of digits is %d",res);
    return 0;
}