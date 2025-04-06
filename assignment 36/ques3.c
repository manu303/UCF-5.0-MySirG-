//function to compare two strings
#include<stdio.h>

int cmprstr(char str1[],char str2[])
{
    printf("Enter 1st string:");
    fgets(str1,50,stdin);
    int i,len1=0,len2=0;
    for(i=0;str1[i]!='\n';i++);
    if(str1[i]=='\n')
        str1[i]='\0';
    
    printf("Enter 2nd string:");
    fgets(str2,50,stdin);
    for(i=0;str2[i]!='\n';i++);
    if(str2[i]=='\n')
        str2[i]='\0';


    while(str1[len1])
        len1++;

    while(str2[len2])
        len2++;

    for(i=0;str1[i]||str2[i];i++)
    {
        if (len1==len2)
        {
            if(str1[i] == str2[i])
                continue;
            else
                break;
        }
        else
            return -1;
    }
    if(str1[i] == '\0' && str2[i] == '\0')
        return 1;
    else if(str1[i] != '\0' || str2[i] != '\0')
        return -1;
}

int main()
{
    char str1[50],str2[50];
    int res;
    res = cmprstr(str1,str2);
    if(res==1)
        printf("Both string1 \"%s\" and string2 \"%s\" are exactly same",str1,str2);
    else
        printf("string1 \"%s\" and string2 \"%s\" are not same",str1,str2);
    return 0;
}