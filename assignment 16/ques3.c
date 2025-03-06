//program to check whether a given number is there in the fibonacci series or not.
#include<stdio.h>
int main(){
    int n,i=1;
    long long int a=0,b=1,c;
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
            printf("%lld is in fibonacci series",n);
            break;
        }
        if(c>n){
            printf("%lld is not in fibonacci series",n);
            break;
        }
        i++; 
    }
    return 0;
}