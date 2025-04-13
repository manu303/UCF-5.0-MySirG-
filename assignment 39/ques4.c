//function to make acronym name from a given name
#include <stdio.h>

void acronym(char str[])
{
    int i, len;
    // Print first letter of first word
    if (str[0] != '\0') {
        if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')) {
            printf("%c", str[0]);
        }
    }

    // Print first letter after each separator
    for (i = 0; str[i]; i++) {
        if (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '\t' || 
            str[i] == '\n' || str[i] == ':' || str[i] == ';' || str[i] == '?' || 
            str[i] == '!' || str[i] == '(' || str[i] == ')') {
            if (str[i+1] != '\0' && ((str[i+1] >= 'a' && str[i+1] <= 'z') || (str[i+1] >= 'A' && str[i+1] <= 'Z'))) {
                printf("%c%c", ' ', str[i+1]);
            }
        }
    }

    // Find the last word
    len = i - 1;
    int found = 0;
    
    // Search backward for any separator, not just space
    while (len >= 0) {
        if (str[len] == ' ' || str[len] == ',' || str[len] == '.' || str[len] == '\t' || 
            str[len] == '\n' || str[len] == ':' || str[len] == ';' || str[len] == '?' || 
            str[len] == '!' || str[len] == '(' || str[len] == ')') {
            found = 1;
            break;
        }
        len--;
    }
    
    // Print from last word's second character if a separator was found
    if (found) {
        for (i = len + 2; str[i]; i++) {
            printf("%c", str[i]);
        }
    }
}

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, 50, stdin);
    int len;
    for (len = 0; str[len]; len++);
    
    // Remove newline character if present
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
    
    acronym(str);
    return 0;
}