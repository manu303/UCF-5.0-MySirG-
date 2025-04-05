//count total number of alphabets,digits and special characters in a string.
#include<stdio.h>
int main()
{
    char str[50];
    int i,alphabets=0,digits=0,spchars=0;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
            alphabets++;
        else if(str[i]>='0' && str[i]<='9')
            digits++;
        else
            spchars++;
    }
    printf("Aphabets-%d\nDigits-%d\nSpecial Characters-%d",alphabets,digits,spchars);
    return 0;
}