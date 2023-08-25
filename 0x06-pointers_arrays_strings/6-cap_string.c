#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 *
 * Return: true if c is a separator, otherwise false.
 */
bool is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i] != '\0'; i++)
    {
        if (separators[i] == c)
        {
            return true;
        }
    }

    return false;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *str)
{
char *ptr = str;
bool new_word = true;
while (*ptr != '\0')
{
if (is_separator(*ptr))
{
new_word = true;
}
else if (*ptr >= 'a' && *ptr <= 'z' && new_word)
{
*ptr = *ptr - ('a' - 'A');
new_word = false;
}
else
{
new_word = false;
}
ptr++;
}
return str;
}
