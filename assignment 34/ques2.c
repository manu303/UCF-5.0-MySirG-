//count the occurence of given character in a given string.
#include<stdio.h>

char lowerstr(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

char lowerchar(char ch)
{
    if (ch>='A' && ch<='Z')
        ch = ch+32;
    return ch;
}

int main()
{
    char ch,str[50];
    int i;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    lowerstr(str);
    printf("Enter a charcter:");
    scanf("%c",&ch);
    ch = lowerchar(ch);
    int count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("\nThe occurence of charcater '%c' in the given string is %d times.",ch,count);
    return 0;
}