//recursive function to print first n even numbers.
#include<stdio.h>
int sumnateven(int n);
int main()
{
    int n,res;
    printf("enter n:");
    scanf("%d",&n);
    res = sumnateven(n);
    printf("The sum is %d",res);
}

int sumnateven(int n)
{
    if(n==1)
        return 2;
    return (n*2) + sumnateven(n-1);
}
