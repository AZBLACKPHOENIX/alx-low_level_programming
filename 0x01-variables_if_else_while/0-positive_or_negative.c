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
int n;
srand(time(NULL));
n = rand() % 200 - 100;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}else if (n == 0)
{
printf("%d is 0", n);
}
return (0);
}
