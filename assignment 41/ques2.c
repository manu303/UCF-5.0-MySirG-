//function to return the most repeating character in a list of strings.
#include<stdio.h>
#include<string.h>

char repeat_char(char list[][50], int size);

int main() {
    int n;
    char reschar;
    printf("Enter number of strings you want to enter: ");
    scanf("%d", &n);
    while (getchar() != '\n');
    char list[n][50];
    reschar = repeat_char(list, n);
    printf("%c\n", reschar);
    return 0;
}

char repeat_char(char list[][50], int size) {
    // Taking input into 2d char array
    int i;
    printf("Enter %d strings:\n", size);
    for (i = 0; i < size; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(list[i], 50, stdin);
        list[i][strcspn(list[i], "\n")] = '\0';
    }

    // Storing all unique characters
    int unqcount = 0;
    char unq[50];
    for (int j = 0; j < size; j++) {
        for (int k = 0; list[j][k]; k++) {
            int isduplicate = 0;
            for (i = 0; i < unqcount; i++) {
                if (unq[i] == list[j][k]) {
                    isduplicate = 1;
                    break;
                }
            }
            if (!isduplicate) {
                unq[unqcount++] = list[j][k];
            }
        }
    }
    unq[unqcount] = '\0';

    char mostRepeatingChar = '\0';
    int maxCount = -1; // Initialize with a value that can't be a count

    // Count occurrences of each unique character
    for (int l = 0; unq[l]; l++) {
        int currentCount = 0;
        for (int j = 0; j < size; j++) {
            for (int k = 0; list[j][k]; k++) {
                if (list[j][k] == unq[l]) {
                    currentCount++;
                }
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostRepeatingChar = unq[l];
        }
    }

    return mostRepeatingChar;
}