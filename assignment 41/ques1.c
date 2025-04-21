//program to find words ending with a letter 's' and store each such word in a 2d char array.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char result[50][50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';  
    int i,p=0,j,k;
    for(i=0;str[i];i++)
    {
        int q=0;
        if((str[i]=='s') && (str[i+1]==' ' || str[i+1]==',' || str[i+1]=='.' || str[i+1]=='\0'))  
        {
            // Find the start of the word
            for(j=i; j>0 && str[j-1]!=' ' && str[j-1]!=',' && str[j-1]!='.'; j--);  // Fixed condition to find start of word
            
            // Copy the word to result array
            for(k=j; k<=i; k++)  // Fixed: copy from start of word (j) to 's' (i)
            {
                result[p][q]=str[k];
                q++;
            }
            result[p][q]='\0';
            p++;
        }
    }

    printf("Words ending with 's':\n");
    for(i=0;i<p;i++)
        printf("%d-%s\n",i+1,result[i]);  // Added newline for better output
    return 0;
}