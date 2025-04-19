//function to remove duplicate names stored in the list of names stored in 2d char array.
#include<stdio.h>
#include<string.h>

int removeduplicates(char names[][30], int size);

int main()
{
    char names[10][30];
    printf("Enter 10 names:\n");
    int i, count;
    
    for(i = 0; i < 10; i++)
    {
        fgets(names[i], 30, stdin);
        // Remove newline character from input
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    
    count = removeduplicates(names, 10);
    
    printf("\nUnique names:\n");
    for(i = 0; i < count; i++)
        printf("%s\n", names[i]);
        
    return 0;
}

int removeduplicates(char names[][30], int size)
{
    char temp[10][30];
    int i, j, uniqueCount = 0;
    
    for(i = 0; i < size; i++)
    {
        int isDuplicate = 0;
        
        // Check if current name already exists in temp array
        for(j = 0; j < uniqueCount; j++)
        {
            if(strcmp(temp[j], names[i]) == 0)
            {
                isDuplicate = 1;
                break;
            }
        }
        
        // If not a duplicate, add to temp array
        if(!isDuplicate)
        {
            strcpy(temp[uniqueCount], names[i]);
            uniqueCount++;
        }
    }
    
    // Copy unique names back to original array
    for(i = 0; i < uniqueCount; i++)
        strcpy(names[i], temp[i]);
        
    return uniqueCount;
}