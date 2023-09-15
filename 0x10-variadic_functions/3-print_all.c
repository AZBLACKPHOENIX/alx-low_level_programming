#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) {
   char c;
   char *s;
   int count = 0;
	va_list args;
    va_start(args, format);
    while (format && format[count]) {
        c = format[count];

        if (c == 'c') {
            printf("%c", va_arg(args, int));
        } else if (c == 'i') {
            printf("%d", va_arg(args, int));
        } else if (c == 'f') {
            printf("%f", (float)va_arg(args, double));
        } else if (c == 's') {
            s = va_arg(args, char *);
            if (s == NULL) {
                printf("(nil)");
            } else {
                printf("%s", s);
            }
        }

        count++;

        if (format[count]) {
            if (c == 'c' || c == 'i' || c == 'f' || c == 's') {
                printf(", ");
            }
        }
    }

    va_end(args);
    printf("\n");
}

