#include "main.h"

/**
 * factorial - Computes the factorial of a given number.
 * @n: The input number.
 * 
 * Return: The factorial of the number. If n is less than 0, return -1.
 */
int factorial(int n)
{
if (n < 0)
return -1;
if (n == 0)
return 1;
return n * factorial(n - 1);
}
