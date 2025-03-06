//program to print nth term of fibbonacci series.
#include<stdio.h>
int main(){
    int term,a=0,b=1,i=1,c;
    printf("Enter the term you want: ");
    scanf("%d",&term);
    while(i<=(term-2)){
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("The %dth term of fibonnaci series is %d",term,c);
    return 0;
}