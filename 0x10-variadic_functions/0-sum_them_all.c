#include <stdarg.h>
/**
 * sum_them_all- add all integers
 * @n: value of the number of the integer
 * @value : the value of arguements
 * @results: sums up all the integers within the variadic function
 */
int sum_them_all(const unsigned int n, ...)
{
int unsigned i = 0;
int unsigned value;
int unsigned results = 0;
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
return 0;
}
return results;
}
