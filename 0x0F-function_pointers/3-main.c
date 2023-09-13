#include "3-calc.h"
#include <string.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
char *operator;
int result;
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];
if (strlen(operator) != 1)
{
printf("Error\n");
exit(99);
}
operation  = get_op_func(operator);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
result = operation(num1, num2);
printf("%d\n", result);
return 0;
}
