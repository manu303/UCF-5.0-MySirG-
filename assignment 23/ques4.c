//function to find the next prime number of a given number(TSRS)
#include<stdio.h>
int nxtprime(int num);
int prime(int num);
int main()
{
    int num,result;
    printf("Enter number: ");
    scanf("%d",&num);
    result = nxtprime(num);
    printf("The next prime number is %d",result);
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