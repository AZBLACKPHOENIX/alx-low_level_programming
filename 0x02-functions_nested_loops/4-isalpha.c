#include "main.h"

/**
 * _isalpha - Check if a character is an alphabetic letter
 * @c: The character used to check
 *
 * Return: 1 if the character is a letter, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >='a' && c <= 'z' || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
