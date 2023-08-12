#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random number and determines if it's positive, negative, or zero
 *
 * Return: 0
 */
int main(void)
{
long int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%ld is positive\n", n);
}
else if (n == 0)
{
printf("%ld is zero\n", n);
}
else
{
printf("%ld is negative\n", n);
}
return (0);
}
