//function to do case insensitive comparision of two strings.
#include<stdio.h>
int strcompare(char str1[],char str2[]);
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter 1st string:");
    fgets(str1,50,stdin);
    printf("Enter 2nd string:");
    fgets(str2,50,stdin);
    int res;
    res = strcompare(str1,str2);
    if(res)
        printf("Equal");
    else
        printf("Not equal");
    return 0;
}
int strcompare(char str1[],char str2[])
{
    int i,len1=0,len2=0;
    while(str1[len1])
    {
        len1++;
    }
    while(str2[len2])
    {
        len2++;
    }
    if(len1!=len2)
    {
        return 0;
    }
    for(i=0;str1[i];i++)
    {
        if(str1[i]>='A'&&str1[i]<='Z')
        {
            str1[i] = str1[i]-32;
        }
    }
    for(i=0;str2[i];i++)
    {
        if(str2[i]>='A'&&str2[i]<='Z')
        {
            str2[i] = str2[i]-32;
        }
    }
    for(i=0;str1[i];i++)
    {
        if(str1[i]!=str2[i])
            break;
    }
    if(str1[i]=='\0' && str2[i]=='\0')
    {
        return 1;
    }
}