//program to check whether a given number is there in the fibonacci series or not.
#include<stdio.h>
int main(){
    int num,a=-1,b=1,c=0;
    printf("Enter num: ");
    scanf("%d",&num);
    while(num>c)
    {
        if(c==num)
        {
            printf("Present");
            break;
        }
        a=b;
        b=c;
        c=a+b;
    }
    if(c!=num)
        printf("Not present");
    return 0;
}