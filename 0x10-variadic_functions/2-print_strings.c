#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print characters 
 * @separator - separates each string
 * @n: the number of arguments
 * ...: characters to print
 * @str: store the retrieved arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i = 0;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; ++i)
{
str = va_arg(arg, char*);
printf("%s", str);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(arg);
printf("\n");
}
