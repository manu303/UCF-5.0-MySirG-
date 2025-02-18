//program to swap two int variables without using 3 variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 varaiables: ");
    scanf("%d%d",&a,&b);
    a=a+b; //updated a value by adding both numbers.
    b=a-b; //updated b by subtracting it's value
    a=a-b; //using b updated a again so both swapped.
    printf("Swapped,a=%d b=%d",a,b);
    return 0;
}