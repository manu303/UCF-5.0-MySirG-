//program to input a characater from the user and print its ascii code
#include<stdio.h>
int main(){
    
    char character;
    printf("Enter a character:");
    scanf("%c",&character);
    printf("The ASCII Code is:%d",character);
    return 0;

}