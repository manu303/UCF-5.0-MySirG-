//function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
#include<stdlib.h>

char* input()
{
    char *ptr = NULL, ch;
    int size = 1, i = 0;
    
    // Allocate initial memory for 1 character
    ptr = (char*)malloc(size * sizeof(char));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    
    printf("Enter a string: ");
    
    while(1)
    {
        ch = getchar();
        if(ch == '\n')
            break;
        
        // Store character at current position
        ptr[i] = ch;
        i++;
        
        // If we've filled the allocated space, increase size
        if(i == size)
        {
            size++;
            ptr = (char*)realloc(ptr, size * sizeof(char));
            if (ptr == NULL) {
                printf("Memory reallocation failed\n");
                return NULL;
            }
        }
    }
    
    // Add null terminator
    ptr[i] = '\0';
    return ptr;
}

int main()
{
    char *res;
    res = input();
    if (res != NULL) {
        printf("Resulted string: %s\n", res);
        free(res);
    }
    return 0;
}