#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void insertWord(char *text, char *wordToFind, char *wordToInsert)
{
    char result[1000] = "";
    char *pos = strstr(text, wordToFind);

    if (pos == NULL)
    {
        printf("Word not found in text.\n");
        return;
    }
    // Copy text before the word
    int position = pos - text;
    strncpy(result, text, position);
    // Add new word with space
    strcat(result, wordToInsert);
    strcat(result, " ");
    // Add rest of original text
    strcat(result, pos);

    printf("Modified text: %s\n", result);
}
int main()
{
    char text[500], wordToFind[50], wordToInsert[50];

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter word to find: ");
    scanf(" %[^\n]s", wordToFind);

    printf("Enter word to insert: ");
    scanf(" %[^\n]s", wordToInsert);
    insertWord(text, wordToFind, wordToInsert);

    return 0;
}
