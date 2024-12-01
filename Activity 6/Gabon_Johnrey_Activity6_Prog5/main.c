#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sortString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    sortString(word);
    printf("Sorted word: %s\n", word);
    return 0;
}
