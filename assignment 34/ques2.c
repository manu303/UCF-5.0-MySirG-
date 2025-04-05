//count the occurence of given character in a given string.
#include<stdio.h>
int main()
{
    char ch,str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    printf("Enter a charcter:");
    scanf("%c",&ch);
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("\nThe occurence of charcater '%c' in the given string is %d times.",ch,count);
}