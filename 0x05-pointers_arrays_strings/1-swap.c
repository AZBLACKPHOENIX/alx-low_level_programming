#include "main.h"

/**
 * swap_int  - swap a and b
 * @a: the value to swap
 * @b: the value to swap
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
