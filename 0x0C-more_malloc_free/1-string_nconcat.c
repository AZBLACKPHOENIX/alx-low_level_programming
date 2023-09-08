#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * concat_strings - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 *result of s1 and s2, or NULL on failure.
 */
char *concat_strings(const char *s1, const char *s2)
{
size_t len_s1 = strlen(s1);
size_t len_s2 = strlen(s2);
size_t len_concatenated = len_s1 + len_s2 + 1;
char *result = (char *)malloc(len_concatenated);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (result == NULL)
return NULL;
strcpy(result, s1);
strcat(result, s2);
return result;
}
