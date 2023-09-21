#include <stdio.h>

/**
 * first - prints text before main function executes
 */
void first(void) __attribute__((constructor));
void first(void)
{
printf("You're beat! and yet, you must allow,\n
I bore my house upon my back!\n before the main function is executed.");
printf("\n");
}
