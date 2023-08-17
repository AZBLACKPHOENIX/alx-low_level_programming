#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int month = 02;
int day = 29;
int year = 2000;
printf("Input date: %02d/%02d/%04d\n", month, day, year);
print_remaining_days(month, day, year);
return 0;
}
