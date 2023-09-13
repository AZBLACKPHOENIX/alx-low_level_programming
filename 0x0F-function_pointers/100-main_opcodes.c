#include <stdio.h>
#include <stdlib.h>
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
int i;
if (argc != 2)
{
printf("Error\n");
return 1;
}
int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return 2;
}
char *main_address = (char *)&main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", (unsigned char)main_address[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
return 0;
}
