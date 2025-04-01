//recursive function to print first n terms of fibonacci series
// Online C compiler to run C program online
#include <stdio.h>

int fib(int n)
{
    if(n==0||n==1)
        return n;
    return fib(n-2)+fib(n-1);
}
void printfibb(int n)
{
    if(n>=0)
    {
       printfibb(n-1);
       printf("%d ",fib(n));
    }

}
int main() {
    int n,res;
    printf("Enter n:");
    scanf("%d",&n);
    printfibb(n);
    return 0;
}