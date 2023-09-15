#include <stdarg.h>
/**
 * sum_them_all- add all integers
 * @n: value of the number of the integer
 * @value: the value of arguements
 * @results: sums up all the integers within the variadic function
 * Return: 0 if n is 0 and results if n is not 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
unsigned int value;
unsigned int results = 0;
va_list args;
va_start(args, n);
while (i < n)
{
value = va_arg(args, unsigned int);
results += value;
i++;
}
va_end(args);
if (n == 0)
{
return (0);
}
return (results);
}
