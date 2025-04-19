//function to store each word of a string in 2 dimensional char array.
#include<stdio.h>
#include<string.h>

int storeword(char str[], char res[][50]);

int main()
{
    char str[50];
    char res[50][50];
    int wordCount;
    
    printf("Enter a string: ");
    fgets(str, 50, stdin);
    if(str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    
    wordCount = storeword(str, res);
    
    // Print the words in main function
    printf("\nWords stored in the array:\n");
    for(int i = 0; i < wordCount; i++)
    {
        printf("%s\n", res[i]);
    }
    
    return 0;
}

int storeword(char str[], char res[][50])
{
    int i, j = 0, k = 0;
    
    for(i = 0; str[i]; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || 
           (str[i] >= 'A' && str[i] <= 'Z') || 
           (str[i] >= '0' && str[i] <= '9'))
        {
            res[k][j] = str[i];
            j++;
        }
        else
        {
            // Only finalize the word if we've collected some characters
            if(j > 0)
            {
                res[k][j] = '\0';  // Null-terminate the current word
                k++;               // Move to next word
                j = 0;             // Reset character position
            }
            // Skip consecutive delimiters
        }
    }
    
    // Handle the last word if it doesn't end with a delimiter
    if(j > 0)
    {
        res[k][j] = '\0';
        k++;
    }
    
    return k; // Return the number of words stored
}