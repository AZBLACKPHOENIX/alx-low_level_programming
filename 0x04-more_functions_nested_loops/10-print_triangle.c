#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
for (int row = 0; row < size; row++)
{
for (int space = size - row - 1; space > 0; space--)
_putchar(' ');
for (int hash = 0; hash <= row; hash++)
_putchar('#');
_putchar('\n');
}
}
