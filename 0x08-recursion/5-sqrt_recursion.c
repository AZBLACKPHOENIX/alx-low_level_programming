#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number using recursion.
 * @n: The number for which to find the square root.
 * 
 * Return: The natural square root of n, or -1 if it does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
return sqrt_recursive(n, 1);
}

/**
 * sqrt_recursive - Helper function to calculate the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 * 
 * Return: The natural square root of n, or -1 if it does not have a natural square root.
 */
int sqrt_recursive(int n, int guess)
{
if (n < 0)
return -1;
if (guess * guess == n)
return guess;
if (guess * guess > n)
return -1;
return sqrt_recursive(n, guess + 1);
}
