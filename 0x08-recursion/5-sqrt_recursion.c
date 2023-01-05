#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
}

