//function to concatenate two strings
#include<stdio.h>
void concat(char str1[],char str2[],int size)
{
    int i,j;
    for(i=0;str1[i];i++);
    for(i,j=0;str2[j];j++,i++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
}

int main()
{
    char str1[100],str2[50];
    printf("Enter 1st string:");
    fgets(str1,50,stdin);
    int i;
    for(i=0;str1[i];i++);
    str1[i-1]='\0';
    fflush(stdin);
    printf("Enter 2st string:");
    fgets(str2,50,stdin);
    for(i=0;str2[i];i++);
    str2[i-1]='\0';
    concat(str1,str2,50);
    printf("Concatenated string:%s",str1);
    return 0;
}