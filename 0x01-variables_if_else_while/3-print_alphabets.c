#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char alphs[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
putchar(alphs[i]);
putchar('\n');
return (0);
}
