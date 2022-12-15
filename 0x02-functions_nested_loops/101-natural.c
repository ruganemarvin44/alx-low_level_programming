#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print sum of multiples of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int x, z = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
		z += x;
		}
		x++;
	}
	printf("%d\n", z);
	return (0);
}
