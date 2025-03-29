//program to print prime numbers between given numbers.
#include<stdio.h>
int main(){
    int num1,num2,i,j;
    printf("Enter starting and ending number: ");
    scanf("%d%d",&num1,&num2);
    for(i=num1+1;i<num2;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }
    return 0;
}