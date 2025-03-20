//function to print first odd natural numbers(TSRN)
#include<stdio.h>
void odd_nat_nums(int n); //function declaration
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    odd_nat_nums(n); //function call
    return 0;
}
//function definition
void odd_nat_nums(int n)
{
    for(int i=1;i<=n;i++)
        printf("%d ",2*i-1);
}
