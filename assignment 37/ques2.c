//return index of first occcurence of given character in the given string.return -1 if character not found.
#include<stdio.h>
char lowercase(char str[])
{
    int i;
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i]+32;
    }
}
char lowerchar(char ch)
{
    if (ch>='A' && ch<='Z')
        ch = ch+32;
    return ch;
}
int firstoccurence(char str[],char ch)
{
    lowercase(str);
    ch = lowerchar(ch);
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i] == ch)
            return i;
    }
    return -1;
}

int main()
{
    char str[50],ch,res;
    printf("Enter a string:");
    fgets(str,50,stdin);
    printf("Enter a character:");
    scanf("%c",&ch);
    res = firstoccurence(str,ch);
    if(res>-1)
        printf("The first occurence of character'%c' is at index %d",ch,res);
    else
        printf("Character %c was not found in the given string",ch);
}