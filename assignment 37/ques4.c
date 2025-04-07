//function to swap two charcaters of a given string with specified indices.
#include<stdio.h>
#include<stdlib.h>
void swapchars(char str[],int i,int j)
{
    char temp;
    if(str[i] == '\0' || str[j] == '\0')
    {
        printf("Can't swap null charcater");
        exit(0);
    }
    else
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main()
{
    char str[50];
    int i,j;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    for(i=0;str[i]!='\n';i++);
        if(str[i]=='\n')
            str[i]='\0';
    printf("Enter indices that you want to swap:");
    scanf("%d%d",&i,&j);
    swapchars(str,i,j);
}