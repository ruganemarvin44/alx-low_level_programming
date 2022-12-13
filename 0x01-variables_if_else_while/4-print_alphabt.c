#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function prints lowercase alphabets except q and e
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c;
	char c = 'a';

	while
		(c <= 'z')
		{
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
