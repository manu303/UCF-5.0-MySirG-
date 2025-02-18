//program to swap 2 int variables.
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter  integers a and b: ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapped,a=%d b=%d",a,b);
    


    return 0;
}