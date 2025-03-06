//program to print first n terms of fibonacci numbers.
#include<stdio.h>
int main(){
    int a=0,b=1,c,term,i=1;
    printf("Enter the term that you want: ");
    scanf("%d",&term);
    printf("%d %d ",a,b);
    while (i<=(term-2))
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        i++;
    }
    return 0;
    
}