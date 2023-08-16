#include "main.h"

/**
 * print_sign - print sign to show either is p, n or zero
 *@n: The num to check
 *
 * Return: 0 ifits zero return 1 if its pos and -1 if its neg
 */
int print_sign(int n)
{
if (n < 0)
_putchar("-");
return (-1);
else if (n == 0)
_putchar("0");
return (0);
else
_putchar("1");
return (1);
}
