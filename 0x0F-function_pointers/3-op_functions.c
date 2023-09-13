#include "3-calc.h"
#include "string.h"
/**
 * op_add - Function to perform addition
 * @a: First integer operand
 * @b: Second integer operand
 *
 * Return: Result of the addition
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Function to perform subtraction
 * @a: First integer operand
 * @b: Second integer operand
 *
 * Return: Result of the subtraction
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Function to perform multiplication
 * @a: First integer operand
 * @b: Second integer operand
 *
 * Return: Result of the multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Function to perform division
 * @a: First integer operand
 * @b: Second integer operand
 *
 * Return: Result of the division
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Function to perform modulo
 * @a: First integer operand
 * @b: Second integer operand
 *
 * Return: Result of the modulo
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

