//program to input a characater from the user and print its ascii code
#include<stdio.h>
int main(){
    
    char character;
    int result;
    printf("Enter a character:");
    scanf("%c",&character);
    result=character;
    printf("The ASCII Code is:%d",result);
    return 0;

}