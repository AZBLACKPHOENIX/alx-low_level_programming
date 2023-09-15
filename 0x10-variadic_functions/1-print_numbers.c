#include <stdarg.h>
#include <stdio.h>
/* 
 * print_numbers - print integer
 * @separator: the character that separate each output
 * @n: the number of argument
 * num: stores the argument retrieved
 * ...:characters to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
unsigned int num = 0;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; ++i)
{
num = va_arg(arg, int);
printf("%d", num);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
va_end(arg);
}
printf("\n");
}
