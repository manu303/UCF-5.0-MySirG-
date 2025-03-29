//program to print nth term of fibbonacci series.
#include<stdio.h>
int main(){
    int term,a=-1,b=1,c;
    printf("Enter term: ");
    scanf("%d",&term);
    while(term)
    {
        c=a+b;
        a=b;
        b=c;
        term--;  
    }
    printf("The requested term of fibonacci series is %d",c);
    
    return 0;
}