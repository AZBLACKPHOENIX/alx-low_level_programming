#include "main.h"

/**
 * _islower - checks if chrtr is lower case
 * @c: The charater used to check
 *
 * Return :1 if is lowercase else 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return 1;
else
return 0;
}
