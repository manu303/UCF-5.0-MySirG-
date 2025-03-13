//given character is uppercase/lowercase alphabet or special chafracter
#include<stdio.h>
int main(){
    printf("Enter any charcater: ");
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a' ... 'z':
        printf("Lowercase alphabet");
        break;
        case 'A' ... 'Z':
        printf("Uppercase alphabet");
        break;
        case '0' ... '9':
        printf("Digit");
        break;
        default:
        printf("Special character");

    }
    return 0;
}