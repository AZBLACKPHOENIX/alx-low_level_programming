#include <unistd.h>

/**
 * _putchar - writes character to the standard output
 * @c - the charcter to print
 * Return: On success the character is returned
 */
int _putchar(char c)
{
write(1, &c, 1);
}
