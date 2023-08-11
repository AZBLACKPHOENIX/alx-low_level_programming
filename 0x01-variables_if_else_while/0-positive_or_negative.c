#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - 0-positive_or_negative.c
 *
 * Return:0
 */
int main(void)
{
srand(time(NULL));
long int n = rand();
if (n < 0)
{
printf("%ld is negative\n", n);
}
else if (n > 0)
{
printf("%ld is positive\n", n);
}else
{
}
return (0);
}
