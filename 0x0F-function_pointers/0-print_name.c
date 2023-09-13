#include "function_pointers.h"

/**
 * print_name-function that prints a name
 * @name: character which holds the name data
 * @f: character used for ouput
 * Return: display name on success
 */
void print_name(char *name, void(*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
