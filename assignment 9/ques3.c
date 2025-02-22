//program to check whether a given alphabet is uppercase or lowercase .
#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter any alphabet:");
    scanf("%c",&alphabet);
    if((alphabet>=65)&&(alphabet<=90))
        printf("Given alphabet %c is uppercase.",alphabet);
    else if ((alphabet>=97)&&(alphabet<=122))
        printf("Given alphabet %c is lowercase.",alphabet);
    else
        printf("please enter valid alphabet not %c",alphabet);
    return 0;
}