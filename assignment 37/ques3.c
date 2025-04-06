//function to find character in a given string between specified indices start index(inclusive) and end index(exclusive)
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
int charbwindeces(char str[],int start,int end,char ch)
{
    lowerstr(str);
    lowerchar(ch);
    int i;
    for(i=start;i<end;i++)
    {
        if(str[i] == ch)
            return i;
    }
}
#include<stdio.h>
int main()
{
    char str[50],ch;
    int start,end,i,res;
    printf("Enter a string:");
    fgets(str,50,stdin);
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("Enter starting index:");
    scanf("%d",&start);
    printf("Enter ending index");
    scanf("%d",&end);
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    res = charbwindeces(str,start,end,ch);
    printf("The character %c is at %d index",ch,res);
    return 0;
}