#include <stdio.h>
#include <stdlib.h>

int stringToInt(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    // Handle negative numbers
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    // Convert each character to integer
    for (; str[i] != '\0'; ++i)
    {
        result = result * 10 + str[i] - '0';
    }

    return sign * result;
}
int main()
{
    const char *str = "-12345";
    int num = stringToInt(str);
    printf("The integer value is: %d\n", num);
    printf("Addition of 10 to integer: %d\n", num + 10);
    return 0;
}
