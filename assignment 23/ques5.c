//function to find the first n prime numbers (TSRN)
#include<stdio.h>
void nprimes(int n);
int main()
{
    int n,result;
    printf("Enter number: ");
    scanf("%d",&n);
    nprimes(n);
    return 0;
}

int prime(int num)
{
    int i;
    for(i=2;i<num;i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}

int nxtprime(int num)
{
    while(!prime(++num));
    return num;
}

void nprimes(int n)
{
    int x=2;
    while(n)
    {
        printf("%d ",x);
        n--;
        x=nxtprime(x);
    }
     
}