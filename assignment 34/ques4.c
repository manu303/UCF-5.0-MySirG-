//count spaces in given string
#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    // Remove the newline character left by fgets
    // int len = 0;
    // while (str[len] != '\0') 
    // {
    //     len++;
    // }

    // if (str[len - 1] == '\n') 
    // {
    //     str[len - 1] = '\0';  // Replace the newline with a null terminator
    // }
    
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
            count++;
    }
    printf("\nThe occurence of space in the given string is %d times.",count);
    return 0;
}