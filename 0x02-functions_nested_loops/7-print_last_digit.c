#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 *@n: is the int that will use for the argument of the function
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
