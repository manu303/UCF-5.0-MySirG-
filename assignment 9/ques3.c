//program to check whether a given alphabet is uppercase or lowercase .
#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter any alphabet:");
    scanf("%c",&alphabet);
    if((alphabet>='A')&&(alphabet<='Z'))
        printf("Given alphabet %c is uppercase.",alphabet);
    else if ((alphabet>='a')&&(alphabet<='z'))
        printf("Given alphabet %c is lowercase.",alphabet);
    else
        printf("please enter valid alphabet not %c",alphabet);
    return 0;
}