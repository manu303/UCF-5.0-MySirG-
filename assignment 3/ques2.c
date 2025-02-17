//program to input a ascii code from the user and print its corresponding character.
#include<stdio.h>
int main(){
    
    int ascii;
    char result;
    printf("Enter an ascii code:");
    scanf("%d",&ascii);
    result=ascii;
    printf("The Character is:%c",result);
    return 0;

}