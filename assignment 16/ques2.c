//program to print first n terms of fibonacci numbers.
#include<stdio.h>
int main(){
    int term,a=-1,b=1,c;
    printf("Enter term: ");
    scanf("%d",&term);
    while(term)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        term--;
    }
    
    return 0;
}