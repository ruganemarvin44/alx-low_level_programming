#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function prints alphabetic in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	c = 'z';

	while (c <= 'a')
		putchar(c);
	c--;
	putchar('\n');
	return (0);
}
