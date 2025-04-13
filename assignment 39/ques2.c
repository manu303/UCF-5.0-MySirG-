//function to find a word in a given string
#include<stdio.h>
int findword(char str[],char word[])
{
    int i,j,k;
    char index[50];
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            if((str[i+1]>='a'&&str[i+1]<='z') || (str[i+1]>='A'&&str[i+1]<='Z'))
            {
                for(j=0;word[j];j++)
                {
                    if(word[j]!=str[i+1+j])
                        break;
                }
                if(word[j]=='\0')
                    return i+1;
            }
        }
    }
    return 0;
}

int main()
{
    char str[50],word[30];
    printf("Enter a string:");
    fgets(str,50,stdin);
    int i,res;
    for(i=0;str[i];i++);
    str[i-1]='\0';
    fflush(stdin);
    printf("Enter word you want find:");
    fgets(word,30,stdin);
    for(i=0;word[i];i++);
    word[i-1]='\0';
    res = findword(str,word);
    if(res==0)
        printf("Not found");
    else
        printf("The word \"%s\" present at index %d",word,res);
    return 0;
}
