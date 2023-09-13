#include "3-calc.h"

/**
 * get_op_func - Function to select the correct operation based on operator
 * @s: Operator string
 *
 * Return: Pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
int j;
while (ops[i].op != NULL)
{
j = 0;
while (s[j] == ops[i].op[j])
{
if (s[j] == '\0')
return (ops[i].f);
j++;
}
i++;
}
return (NULL); /* Operator not found*/
}
