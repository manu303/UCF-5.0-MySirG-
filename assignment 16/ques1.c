//program to print nth term of fibbonacci series.
#include<stdio.h>
int main(){
    int term,i=0;
    long long int c,a=0,b=1;
    printf("Enter the term you want: ");
    scanf("%d",&term);
    if(term==a){
        printf("The %d term of fibonnaci series is %d",term,a);
    }
    else if(term==b){
        printf("The %d term of fibonnaci series is %d",term,b);
    }
    else{
        while(i<=(term-2)){
            c=a+b;
            a=b;
            b=c;
            i++;
        }
        printf("The %lld term of fibonnaci series is %lld",term,c);
    }
    return 0;
}