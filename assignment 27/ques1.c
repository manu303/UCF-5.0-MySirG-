//recursive function to print sum of first n natural numbers.
#include<stdio.h>
int sumnat(int n);
int main()
{
    int n,result;
    printf("Enter n: ");
    scanf("%d",&n);
    result = sumnat(n);
    printf("sum is %d",result);
}

int sumnat(int n)
{
    if(n==1)
        return 1;
    return n+sumnat(n-1);
}