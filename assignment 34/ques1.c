//program to calculate length of the string.
#include<stdio.h>
int main()
{
    int i;
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    for(i=0;str[i];i++);
    printf("The length of the given string is:%d",i);//to remove new line charcater from string (when user press enter we get new line as well along with other characters)
    return 0;
}