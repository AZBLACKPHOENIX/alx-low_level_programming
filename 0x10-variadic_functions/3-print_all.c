#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints various types of arguments based on the format.
 * @format: A string that specifies the format of the arguments.
 *          'c' for char, 'i' for int, 'f' for float, 's' for string.
 *          Any other characters are ignored.
 *          For 's', if the string is NULL, it prints "(nil)".
 * @...: The arguments to be printed based on the format.
 */
void print_all(const char * const format, ...) {
va_list args;
int i = 0;
char c;
char *s;
va_start(args, format);
while (format && format[i])
{
c = format[i];
switch (c)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", (float)va_arg(args, double));
break;
case 's':
{
s = va_arg(args, char *);
if (s == NULL) {
printf("(nil)");
}
else
{                 
printf("%s", s);
}
}
break;
default:
break;
}
if (format[i + 1])
{
printf(", ");
}
i++;
}
va_end(args);
printf("\n");
}
