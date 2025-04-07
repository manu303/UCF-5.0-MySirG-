//check whether a given string is a palindrome or not.
#include<stdio.h>
int isPalindrome(char str[])
{
    int i,j=0;
    char newstr[50];
    //remove special characters
    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') || (str[i]>='0'&&str[i]<='9') )
        {
            str[j]=str[i];
            j++;
        }     
    }
    str[j]='\0';
    //lower the string
    for(i=0;str[i];i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i] = str[i]+32;
    }
    //length of string
    int len = 0;
    while(str[len])
        len++;
    //reverse string
    for(i=0;str[i];i++)
    {
        newstr[i] = str[len-1-i];
    }
    newstr[i]='\0';
    for(i=0;str[i];i++)
    {
        if(newstr[i]==str[i])
            continue;
        else
            break;
    }
    if(str[i]=='\0'&& newstr[i]=='\0')
        return 1;
    else
        return 0;
}
int main()
{
    char str[50];
    int i,res;
    printf("Enter a string:");
    fgets(str,50,stdin);
    res = isPalindrome(str);
    if(res)
        printf("Given string is palindrome");
    else
        printf("Not a palindrome");
    return 0;
}