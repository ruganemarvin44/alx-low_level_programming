#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: character that is measured against
 * Return: 1 if n is greater than 0 and 0 otherwise.
 */
int print_sign(int n)
{
	if  (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
