#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random number and determines the last digit's value
 *
 * Return: 0
 */
int main(void)
{
int n;
int lastDigit;
srand(time(NULL));
n = rand();
lastDigit = n % 10;
printf("Last digit of %d is %d and is ", n, lastDigit);
if (lastDigit > 5)
{
printf("greater than 5\n");
}
else if (lastDigit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
