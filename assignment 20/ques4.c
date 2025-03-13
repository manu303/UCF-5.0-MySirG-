//vowel or consonant or other special charcater
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("\nVowel alphabet/charcater");
        break;
        
        case 'b' ... 'd':
        case 'f' ... 'h':
        case 'j' ... 'n':
        case 'p' ... 't':
        case 'v' ... 'z':
        case 'B' ... 'D':
        case 'F' ... 'H':
        case 'J' ... 'N':
        case 'P' ... 'T':
        case 'V' ... 'Z':
        printf("\nconsonant charcater");
        break;

        case '0' ... '9':
        printf("\nDigit");
        break;

        default:
        printf("\nSpecial charcater");
    }
    return 0;
}