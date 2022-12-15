#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print sum of multiples of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x < 1024)
	{
		if ((x / 3) || (x / 5))
		_putchar(x + '0');
		x++;
	}

	return (0);
}
