//program to check whether the given character is alphabet(uppercase) or alphabet(lowercase) or digit or a special charcater.
#include<stdio.h>
int main(){
    char character;
    printf("enter any character: ");
    scanf("%c",&character);
    if((character>=65)&&(character<=90))
        printf("given character %c is uppercase alphabet.",character);
    else if ((character>=97)&&(character<=122))
        printf("given character %c is lowercase alphabet.",character);
    else if ((character>=48)&&(character<=57))
        printf("given character %c is a digit.",character);
    else
        printf("given character %c is a special character.",character);
    return 0;
}