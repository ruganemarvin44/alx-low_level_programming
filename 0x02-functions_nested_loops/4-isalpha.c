#include "main.h"
/**
 * _isalpha - returns alphabetic characters
 *@c: is the character to be checked
 * Return: 0
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
