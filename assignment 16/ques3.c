//program to check whether a given number is there in the fibonacci series or not.
#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i=1;
    printf("Enter the number you want to check: ");
    scanf("%d",&n);
    if(n==0){
        printf("%d is in fibonacci series",n);
    }
    while (i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n){
            printf("%d is in fibonacci series",n);
            break;
        }
        if(c>n){
            printf("%d is not in fibonacci series",n);
            break;
        }
        i++; 
    }
    return 0;
}