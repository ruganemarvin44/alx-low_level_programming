#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints an name
 * @name: name of person
 * @f: pointer to function
 *
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

