//count the occurence of given character in a given string.
#include<stdio.h>
int main()
{
    char ch,str[50];
    int i;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    printf("Enter a charcter:");
    scanf("%c",&ch);
    int count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("\nThe occurence of charcater '%c' in the given string is %d times.",ch,count);
    return 0;
}