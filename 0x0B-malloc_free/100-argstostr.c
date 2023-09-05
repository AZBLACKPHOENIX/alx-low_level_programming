#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: If ac == 0 or av == NULL or if memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to a new string containing the concatenated arguments.
 */
char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
return (NULL);
int total_length = 0;
int i, j;char *concatenated;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
total_length++;
}
total_length++;
}
concatenated = (char *)malloc(sizeof(char) * (total_length + 1));
if (concatenated == NULL)
return (NULL);
int index = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
concatenated[index++] = av[i][j];
}
concatenated[index++] = '\n';
}
concatenated[index] = '\0';
return (concatenated);
}
