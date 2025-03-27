//calculate sum of all even numbers and sum of all odd numbers.
#include<stdio.h>
int input(int a[],int n);
int calc(int c[],int n);
int main()
{
    int n,res;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    res = calc(a,n);
    return 0;
}

int input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d number: ",i+1);
        scanf("%d",&b[i]);
    }
}

int calc(int c[],int n)
{
    int even=0,odd=0,i;
    for(i=0;i<n;i++)
        if(c[i]%2==0)
            even = even+c[i];
        else
            odd = odd+c[i];
    printf("The sum of even numbers is %d\n",even);
    printf("The sum of odd numbers is %d\n",odd);
}