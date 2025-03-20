//function to find the next prime number of a given number(TSRS)
#include<stdio.h>
int nxtprime(int num);
int main()
{
    int num,result;
    printf("Enter number: ");
    scanf("%d",&num);
    result = nxtprime(num);
    printf("The next prime number is %d",result);
    return 0;
}

int nxtprime(int num)
{
    int i,j;
    for(i=num+1;i<=2*num;i++){
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            return i;
    }
    
}