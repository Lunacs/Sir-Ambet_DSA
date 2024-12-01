#include <stdio.h>
#include <string.h>

#define MAX_TEXT_LENGTH 1000
#define MAX_WORD_LENGTH 100

int countOccurrences(char *text, char *word)
{
    int count = 0;
    char *pos = text;
    int wordLen = strlen(word);

    while ((pos = strstr(pos, word)) != NULL)
    {
        count++;
        pos += wordLen;
    }

    return count;
}

int main()
{
    char text[MAX_TEXT_LENGTH];
    char word[MAX_WORD_LENGTH];

    printf("Enter a line of text: ");
    fgets(text, MAX_TEXT_LENGTH, stdin);
    text[strcspn(text, "\n")] = '\0'; // Remove trailing newline character

    printf("Enter a word: ");
    scanf("%s", word);

    int occurrences = countOccurrences(text, word);
    printf("The word '%s' occurs %d times in the text.\n", word, occurrences);

    return 0;
}
