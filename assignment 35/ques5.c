#include<stdio.h>
int main()
{
    char str[50],ch;
    printf("Enter a string:");
    fgets(str,50,stdin);
    int i;
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    printf("Enter a character:");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
            break;
    }
    printf("The first occurence of the character '%c' at %d characater in the given string.",ch,i+1);
    return 0;
}