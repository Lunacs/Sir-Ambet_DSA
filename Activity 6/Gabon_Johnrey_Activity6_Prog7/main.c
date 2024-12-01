#include <stdio.h>

int main()
{
    char c;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0; // Flag to track if we are inside a word

    printf("Enter text (Press Ctrl+D to end input on Linux/Mac or Ctrl+Z on Windows):\n");
    // Use a loop to read characters until end-of-file (EOF)
    while ((c = getchar()) != EOF)
    {
        characters++; // Count every character

        // Count lines
        if (c == '\n')
        {
            lines++;
        }

        // Count words
        if (c == ' ' || c == '\n' || c == '\t')
        {
            inWord = 0; // Outside a word
        }
        else if (!inWord)
        {
            inWord = 1; // Start of a new word
            words++;
        }
    }
    // Adjust for edge cases: No input or missing final newline
    if (characters > 0 && c == EOF && inWord)
    {
        lines++; // Add a line if text doesn't end with '\n'
    }
    // Display results
    printf("\nStatistics:\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
