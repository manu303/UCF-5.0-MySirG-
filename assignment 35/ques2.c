//reverse a string
#include<stdio.h>
int main()
{
    char str[50],newstr[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    int i,len =0;
    for(i=0;str[i]!='\n';i++);
    if(str[i] == '\n')
        str[i] = '\0';
    while(str[len])
    {
        len++;
    }
    for(i=0;str[i];i++)
        newstr[i] = str[(len-1)-i];
    newstr[i] = '\0';
    printf("The reversed string is %s",newstr);
    return 0;
}