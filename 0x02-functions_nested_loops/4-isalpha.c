#include "main.h"

/**
 * _isalpha - Check if a character is an alphabetic letter.
 * @c: The character used to check.
 *
 * Return: 1 if the character is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; alphabet[i] != '\0'; i++)
{
if (c == alphabet[i])
return 1;
}
return 0;
}
