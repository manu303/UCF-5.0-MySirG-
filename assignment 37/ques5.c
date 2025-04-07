//function to check whether a given string is an alphanumeric string or not.
#include<stdio.h>
int alphanum(char str[])
{
    int i,j;
    
    for(i=0;str[i];i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
        {
            for(j=0;str[j];j++)
            {
                if(str[j]>='0' && str[j]<='9')
                {
                    return 1;
                }
            }
        }
    }
}
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    int i,res;
    for(i=0;str[i]!='\n';i++);
    if(str[i]=='\n')
        str[i]='\0';
    res = alphanum(str);
    if(res)
        printf("Given string is alphanumeric.");
    else
        printf("Not an alphanumeric string");
}