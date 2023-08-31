#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered identical.
 * @s1: The first string.
 * @s2: The second string.
 * 
 * Return: 1 if strings are considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '\0')
        return (*s1 == '\0');

    if (*s2 == '*')
    {
        if (*(s2 + 1) == '*')
            return wildcmp(s1, s2 + 1);

        while (*s1 != '\0')
        {
            if (wildcmp(s1, s2 + 1))
                return 1;
            s1++;
        }

        return wildcmp(s1, s2 + 1);
    }

    if (*s1 == '\0' || *s1 != *s2)
        return 0;

    return wildcmp(s1 + 1, s2 + 1);
}
