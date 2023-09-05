#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If memory allocation fails or if s1 or s2 is NULL, returns NULL.
 * Otherwise, returns a pointer to the newly allocated concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    unsigned int len1 = 0, len2 = 0;
    unsigned int i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;

    while (s2[len2])
        len2++;

    concatenated = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

    if (concatenated == NULL)
        return NULL;

    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return concatenated;
}
