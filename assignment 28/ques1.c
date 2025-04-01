//recursive function to print sum of factorial of given number.
#include<stdio.h>
int fact(int n);
int main()
{
    int n,res;
    printf("Enter n: ");
    scanf("%d",&n);
    res = fact(n);
    printf("The factorial is %d",res);
    return 0;
}

int fact(int n)
{
    if(n==0||n==1)
        return 1;
    return n * fact(n-1);
}
