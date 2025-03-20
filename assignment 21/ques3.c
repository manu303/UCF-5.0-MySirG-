//function to check whether a given number is even or odd . return 1 if the number is even ,otherwise return 0 (TSRS)
#include<stdio.h>
int evenodd(int num);
int main(){
    int num,result;
    printf("Enter number: ");
    scanf("%d",&num);
    result = evenodd(num);
    if(result)
        printf("The given number %d is even",num);
    else
        printf("The given number %d is odd",num);
    return 0;
}

int evenodd(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}