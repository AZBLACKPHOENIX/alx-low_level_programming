#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * putchar -prints character
 * @c: chacarter to print
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
