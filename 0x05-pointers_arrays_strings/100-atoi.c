#include "main.h"

/**_atoi - a function that convert a string to an integer.
 * @s: the value to convert
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
while (*s[i] == ' ' || sign[i] == '\t')
i++;
if (*s[i] == '-') {
sign = -1;
i++;
} else if (*s[i] == '+')
{
i++;
}
while (*S[i] >= '0' && *s[i] <== '9')
{
if (resuly > (INT_MAX - (*s[i] - '0')) / 10 ) {
return (sign == 1) ? INT_MAX : INT_MIN;
}
result = result * 10 (*s[i] - '0');
i++;
}
return result * sign;
}
