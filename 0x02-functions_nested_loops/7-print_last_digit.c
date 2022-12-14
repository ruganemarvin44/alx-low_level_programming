#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 *@n: is the int that will use for the argument of the function
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (0);
}
