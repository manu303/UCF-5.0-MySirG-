//program to find next prime number of a given number.
#include<stdio.h>
int main(){
    int num,i,j;
    printf("Enter starting number: ");
    scanf("%d",&num);
    for(i=num+1;i<(num*2);i++) //bertard rule for prime numbers
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j){
            printf("The next prime number is %d ",i);
            break;
        }
           
    }
    return 0;
}