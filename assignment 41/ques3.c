//check whether a pair of strings are anagram or not.both stored in an 2d char array.
#include<stdio.h>
#include<string.h>
int anagram(char strings[2][50]);
int main()
{
    char strings[2][50];
    if(anagram(strings))
        printf("Anagram");
    else
        printf("Not an anagram");
    return 0;
}

int anagram(char strings[2][50])
{
    //taking input from user
    
    for(int i=0;i<2;i++)
    {
        printf("Enter %d string:",i+1);
        fgets(strings[i],50,stdin);
        if(strings[i][strcspn(strings[i],"\n")]=='\n')
            strings[i][strcspn(strings[i],"\n")]='\0';
    }
    //logic to find anagram or not
    char res[50];
    res[0]='\0';
    if(strlen(strings[0])==strlen(strings[1]))
    {
        int row,col;
        for(row=0;row<strlen(strings[0]);row++)
        {
            for(col=0;col<strlen(strings[0]);col++)
            {
                if(strings[0][row]==strings[1][col])
                {
                    res[row]=strings[0][row];
                    break;
                }
            }
        }
        if(res[0]=='\0')
            return 0;
        res[row]='\0';
        if(strlen(res)==strlen(strings[1]))
            return 1;
    }
    else
        return 0;
}