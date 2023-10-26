#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints character
 * @c: character to print
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
