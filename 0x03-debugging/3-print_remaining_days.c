#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int is_leap = 0;
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
is_leap = 1;
}
if (is_leap)
{
days_in_month[2] = 29;
}
if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}
int remaining_days = 0;
for (int i = month + 1; i <= 12; i++)
{
remaining_days += days_in_month[i];
}
remaining_days += days_in_month[month] - day;
printf("Day of the year: %d\n", day + remaining_days);
printf("Remaining days: %d\n", is_leap ? 366 - day - remaining_days : 365 - day - remaining_days);
}
