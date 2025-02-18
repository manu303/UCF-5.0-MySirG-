//program to swap two int type variables without 3rd variable and +,- operators
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two integer numbers: ");
    scanf("%d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("Swapped,a=%d b=%d",a,b);
    return 0;

}