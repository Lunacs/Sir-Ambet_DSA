#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prob1_1();
void prob1_2();
void prob1_3();
void prob1_4();
void prob1_5();

int main()
{
    prob1_5();
    return 0;
}

void prob1_1()
{   // Remove third parameter
    char s[10];
    strcpy(s, "hello");

    printf("%s\n", s);
}
void prob1_2()
{
    char s[] = "Its cold!";
    printf("%s\n",s); // Correct spelling
}
void prob1_3()
{   // Use %c for char
    printf("char: %c\n", 'a');
    // OR
    // Use double quotes for string
    printf("string: %s", "a");
}
void prob1_4()
{   // Increase size to fit "welcome home\0"
    char s[13];
    strcpy(s, "welcome home");
    printf("%s", s);
}
void prob1_5()
{
    char string1[] = "gotoMars";
    char string2[] = "gotoMars";
    // Compare return value to 0
    if (strcmp(string1, string2) == 0)
    {
        printf("the strings are equal\n");
    }
}
