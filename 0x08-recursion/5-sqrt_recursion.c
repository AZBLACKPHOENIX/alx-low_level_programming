#include "main.h"

/**
 * sqrt_recursive - Helper function to calculate the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 * 
 * Return: The natural square root of n, or -1 if it does not have a natural square root.
 */
int _sqrt_rec_helper(int n, int guess)
{
if (n < 0)
return -1;    
if (guess * guess == n)
return guess;    
if (guess * guess > n)
return -1;
return _sqrt_rec_helper(n, guess + 2);
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number using recursion.
 * @n: The number for which to find the square root.
 * 
 * Return: The natural square root of n, or -1 if it does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
return _sqrt_rec_helper(n, 1);
}

